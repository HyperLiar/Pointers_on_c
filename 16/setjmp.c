#include<stdio.h>
#include<stdlib.h>
#include<setjmp.h>

jmp_buf restart;

int main() {
    int value;
    Trans *transaction;

    // 确立一个希望在longjmp调用后继续执行流恢复执行的地点
    value = setjmp( restart );

    // longtmp返回后判断下一步执行什么
    switch  ( setjmp( restart )) {
        default:
            // longjmp被调用 -- 致命错误
            fputs( "Fatal error.\n", stderr );
            break;

        case 1:
            // longtmp被调用 -- 小错误
            fputs( "Invalid transaction.\n", stderr );

        case 0:
            // 最初从setjmp返回的地点：执行正常处理
            while( ( transaction = get_trans() ) != NULL )
                process_trans( transaction );

    }

    write_data_to_file();

    return value == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}
