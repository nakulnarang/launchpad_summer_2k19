// Following is a simple program to demonstrate 
// syntax of switch. 
#include <stdio.h> 
int main() 
{ 
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
int x = 2; 
switch (x) 
{ 
    case 1: printf("Choice is 1"); 
            break; 
    case 2: printf("Choice is 2"); 
                // break; 
    case 3: printf("Choice is 3"); 
            // break; 
    default: printf("Choice other than 1, 2 and 3"); 
                break; 
} 
return 0; 
} 