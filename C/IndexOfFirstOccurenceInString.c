int strStr(char* haystack, char* needle) {
    int n1,n2,i,j,flag;
    n1=strlen(haystack);
    n2=strlen(needle);
    for(i=0;i<n1;i++){
        j=0;
        while( j<n2 && haystack[i+j]==needle[j]){
            j++;
        }
        if (j==n2){
            return (i);
        }
    }
    return -1;
}
