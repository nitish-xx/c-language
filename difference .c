#include<stdio.h>
#define max 100
int ifexists(int z[], int u, int v){
 int i;
 if (u==0) return 0;
 for (i=0; i<=u;i++)
 if (z[i]==v) return (1);
 return (0);
}
void main() {
 int p[max], q[max], r[max],m,n,I,j,k;
 printf("Enter length of first array:"); 
 scanf("%d",&m); 
 printf("Enter %d elements of first array\n",m); 
 for(i=0;i<m;i++ ) 
 scanf("%d",&p[i]); 
 printf("\nEnter length of second array:");
 scanf("%d",&n);
 printf("Enter %d elements of second array\n",n);
 for(i=0;i<n;i++ ) 
scanf(" %d",&q[i]);
 k=0;
 for (i=0;i<m;i++ ) 
 { 
 f or (j=0;j<n;j+ +) 
 {
 if (p[i]==q[ j])
 { 
break; 
 }
 }
 i f(j == n)
 {
 i f(!ifexists( r,k,p [i])) 
 {
 r[k] =p[i];
 k++;
 }
 }
 }
 printf("\nThe dif ference of the two array is:\n");
 for(i = 0;i<k;i++)
 printf("%d\n",r[i]);
}
