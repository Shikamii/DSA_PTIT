// #include<stdio.h>
// #include<math.h>
// #include<string.h>

// #define ll long long

// // ax^2 + bx + c = 0
// int main()
// {
//     int a, b, c;
//     scanf("%d%d%d", &a, &b, &c);
//     if(a==0){
//         if(b==0){
//             if(c==0) printf("VO SO NGHIEM");
//             else printf("VO NGHIEM");
//         }
//         else{  // a = 0, b!=0;
//             printf("%.2f", (float)-c/b);
//         }
//     }
//     else{
//         ll denta = (ll)b*b - 4*(ll)a*c;
//         if(denta < 0) printf("VO NGHIEM");
//         else if(denta == 0){
//             printf("%.2f", (float)-b/(2*a));
//         }
//         else{
//             double n1 = ((double)-b + sqrt(denta))/(2*a);
//             double n2 = ((double)-b - sqrt(denta))/(2*a);
//             if(n1 < n2) printf("%.2llf %.2llf", n2, n1);
//             else printf("%.2llf %.2llf", n1, n2);
//         }
//     }
// }
#include <stdio.h>

int main(){
	int a,b; 
	scanf("%d%d",&a,&b);
	if(a!=0 && b!=0){
		printf("%.6lf", (double) -b/a); 
	} else if(a==0 && b!=0){
		printf("INVALID");
	} else if(a==0 && b==0){
		printf("ALL");
	} 
} 