	strcpy(s1, s2);  
	复制字符串 s2 到字符串 s1。  
	strcat(s1, s2);  
	连接字符串 s2 到字符串 s1 的末尾。  
	strlen(s1);  
	返回字符串 s1 的长度。  
	strcmp(s1, s2);
	如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回小于 0；如果 s1>s2 则返回大于 0。
	strchr(s1, ch);
	返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
	strstr(s1, s2);
	返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。


* 输入输出
  * scanf()：遇到空字符就会停止读取,printf()
  * getchar(),putchar():读取输出单个字符
   
  ```c
  #include <stdio.h>
 
	int main( )
	{
	int c;
	
	printf( "Enter a value :");
	c = getchar( );
	
	printf( "\nYou entered: ");
	putchar( c );
	printf( "\n");
	return 0;
	}
	```
	* gets(),puts():读取输出一行字符
	```c
	#include <stdio.h>
 
	int main( )
	{
	char str[100];
	
	printf( "Enter a value :");
	gets( str );
	
	printf( "\nYou entered: ");
	puts( str );
	return 0;
	}0
	```