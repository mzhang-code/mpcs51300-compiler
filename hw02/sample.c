// External function
extern int foo2(int x);
// Function
int foo(int count) {
    int sum = 0.0;
    for (int i = 1; i <= count; i++)
        sum = sum + foo2(i);
    return sum;
}
