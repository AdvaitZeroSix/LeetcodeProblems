int maxArea(int* height, int heightSize) {
    int a,h,l,r;
    a=0;
    l=0;
    r=heightSize-1;
    while (l<r){
        h=height[l]<height[r]?height[l]:height[r];
        a=a<(h*(r-l))?(h*(r-l)):a;
        if(height[l]<height[r])
        l++;
        else
        r--;
    }
    return a;
}
