#define STACK_TYPE int /* 堆栈存储的值的类型 */
void push ( STACK_TYPE value );
void pop ( void );
STACK_TYPE top ( void );
int is_empty( void );
int is_full( void );
