int BinSearch(int a[], int low, int high, int k) //折半查找算法
{

    int mid;
    if(low<=high) //当前区间有元素
    {
        mid = (low + high) / 2;
        
        if(a[mid] == k)

            return mid;

        if(a[mid]  > k) 

            return BinSearch(a,low, mid - 1, k);

        else
            
            return BinSearch(a,mid + 1, high, k);

    }
    else {

      //  printf("没有查找到该值\n");
        return -1;
        
        }          //若当前查找区间没有元素时返回-1
}