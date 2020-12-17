//*1.

/*
#include<stdio.h>
int main(void)
{
	//       0     2     F 0
	int x = -1, y = 2, z = 0;

	 //F      not check second condition
  // -1+1=0
	z =++x && y++;


	printf("\n x=%d, y=%d,  z=%d", x, y, z);

	return 0;
}
*/

// 2.
/*
#include<stdio.h>
int  main(void)
{
	//     0      3      1
	int x = -1, y = 2, z = 0;

	// T  T    T
	//  -1      2
	z = x++ && y++;

	printf("\n x=%d, y=%d,  z=%d\n", x, y, z);
	return 0;
}
*/


//3.
/*
#include<stdio.h>
int main(void)
{  //     1       1    0
	int x = 0, y = 0, z = 0;

	//F    F     F
	//    0     0
	z = x++ || y++;

	printf("\n x=%d, y=%d,  z=%d", x, y, z);

	return 0;
}
*/

// 4.
/*
#include<stdio.h>
int main(void)
{
      // 0         0      1
	int x = -1, y = -1, z = 0;

// T     F	     T
//     -1+1=0    -1
	z = ++x   || y++;

	printf("\n x=%d, y=%d,  z=%d\n", x, y, z);
	return 0;
}
*/


//5.
/*

#include<stdio.h>
int main(void)
{
	//  2  1 1   1
	int i, j, k, l;
	i = j = k =1;

	// left to right

   //T    T     not check 2ed condition
	//  1
	l = i++ || j++ && k++;

	printf("i=%d j=%d k=%d l=%d", i, j, k, l);

	return 0;
}

*/

//6.
/*
#include<stdio.h>
int main(void)
{
	//  2  2  1  1
	int i, j, k, l;

	i = j = k = 1;
  // T == T    T    not check 2ed
	//   2     2
	//   1     1
	l = ++i && ++j || ++k;
      // 1st or       2ed part

	printf("i=%d j=%d k=%d l=%d", i, j, k, l);

	return 0;
}
*/

/*
//7.
#include<stdio.h>
int main()
{
	//  1  1  1  0
	int i, j, k, l;
	i = j = k =0;
     //F F     F       F   -->F
	//   0      0       0
	l = i++ || j++ || k++;
       // 1st or      //2d part of or
	printf("i=%d j=%d k=%d l=%d", i, j, k, l);

//  2   0 0	 1
	i=1,j=k=l=0;

	// T   T             not check
    //   1	  not check
	l = i++ || j++ || k++;
	    // 1st or      //2d part of or
		printf("\ni=%d j=%d k=%d l=%d", i, j, k, l);

	return 0;
}
*/

//8.
/*
#include<stdio.h>
int main(void)
{
	//  0  -1 0 0
	int i, j, k, l;

	i = j = k = -1;
//   F==           F            F
//                        -1+1=0
 // F   F      not check
//    -1+1=0
	l = ++i    && ++j || ++k;
      // 1st               //2ed

	printf("i=%d j=%d k=%d l=%d", i, j, k, l);

	return 0;
}
*/

//9
/*
#include<stdio.h>
int main(void)
{
	int i=3, j;
// gcc
//     5*5=25    * 	6 ==150
//      4     4->5	   5
//	    3
	j = ++i * ++i * ++i;


	printf("i=%d j=%d\n", i,j);

	i=3;
	  // 5*5=25     5->6 == 25*6=150*7=1050
      // 4    4->5           6->7
 	  // 3
	j = ++i * ++i * ++i *  ++i;

// VS TC
	    // 3->4 4->5 5->6
 	//j = ++i * ++i * ++i;
	  // j=6*6*6= 216

	printf("i=%d j=%d\n", i,j);
	return 0;
}

*/
//10.
/*
#include<stdio.h>
int main(void)
{
	                        //6   6    7   9   10
	//       5              //5   6    7   8    9
	//int i = (3, 4, 5), j = (++i, i++, i++, ++i, ++i);

	//                       6   6    7     9
 	   //          5         5   6    7     8    9   -->10
	int i = (3, 4, 5), j = (++i, i++, i++, ++i, i++);


	printf("i=%d j=%d\n ", i, j);

	return 0;
}
*/

//11
/*
#include<stdio.h>
int main(void)
{
	int i, j;

	i=3,4,5; //3
	//  4    5   6
	//  3    4    5
	j=(++i,  ++i, ++i);

	printf("i=%d j=%d\n ", i, j);

	return 0;

}
*/

//12

#include<stdio.h>
int main(void)
{
	int i = (3, 4, 5);  // allowed 5
	//int i = 3, 4, 5;  //not allowed
     //       6    6   7     9  10
	//        5    6   7     8   9
	int j =( ++i, i++, i++, ++i, ++i);

	printf("\n i=%d j=%d", i, j);

	return 0;
}

