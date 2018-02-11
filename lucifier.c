#include <stdio.h>

int main() {
  int n,i,j;
  scanf("%d",&n);
  int force_vec [n][3];
  int s[]={0,0,0};
  for(i=0;i<n;i++){
    for(j=0;j<3;j++){
      scanf("%d",&force_vec[i][j]);
    }
  }
  for(j=0;j<3;j++){
    for(i=0;i<n;i++){
      s[j] = s[j]+force_vec[i][j];
    }
  }
  
  if(s[0]==0 && s[1]==0 && s[2]==0)
  printf("YES\n");
  else
  printf("NO\n");
  return 0;
}
