#include <stdio.h>
#include <stdlib.h>

int frobcmp(char const *a, char const *b){
  int result = 0;

  int alen = 0;
  while(a[alen] != ' '){
    alen ++;
  }

  int asum = 0;
  for(int i = 0; i < alen + 1; i++){
    asum += (a[i] ^ 42);
  }
  
  int blen = 0;
    while(b[blen] != ' '){
    blen ++;
  }

  int bsum = 0;
  for(int i = 0; i < blen + 1; i++){
    bsum += (b[i] ^ 42);
  }

  if(asum > bsum) result = 1;
  if(bsum > asum) result = -1;
  
  return result;
}

int compare (const void *a, const void *b){
  return frobcmp( (char const*)a, (char const*)b);
}

int main(){
  
  /*  char **arr = (char **)malloc(sizeof(char *));
  char *word = (char *)malloc(sizeof(char));
  char in;
  int alen = 0;
  int wlen = 0;
  
  while(in = getchar() != EOF){
    if(in == ' '){
      word[wlen] = in;
      arr[alen] = word;
      alen++;
      arr = realloc(arr, (alen + 1) * sizeof(char *));
      word = realloc(word, (sizeof(char)));
      wlen = 0;
    }
    else{
      word[wlen] = in;
      wlen++;
      word = realloc(word, (wlen + 1) * sizeof(char));
    }
  }

  qsort(arr, alen + 1, sizeof(char *), compare);

  int i = 0;
  int j = 0;

  while(i < alen + 1){
    putchar(arr[i][j]);

    if(arr[i][j] == ' '){
      i++;
      j = 0;
    }

    j++;
    } */
  int i = frobcmp ("*{_CIA\030\031 ", "*`_GZY\v ");
   putchar(i);
}
