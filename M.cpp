int FirstOcc(vector<int>& arr, int n, int k)
{
    int s=0 , e=n-1;
    int mid=s+(e-s)/2;
    int ans;

    while(s<=e)
    {
      if(arr[mid]==k)
      {
          ans=mid;
          e=mid-1;
      }

      else if(k>arr[mid])
      {
          s=mid+1;
      }
      else
      {
          e=mid-1;
      }

      mid=s+(e-s)/2;
    }
return ans;
}

int LastOcc(vector<int>& arr, int n, int k)
{
    int s=0 , e=n-1;
    int mid=s+(e-s)/2;
    int ans;

    while(s<=e)
    {
      if(arr[mid]==k)
      {
          ans=mid;
          s=mid+1;
      }

      else if(k>arr[mid])
      {
          s=mid+1;
      }
      else
      {
          e=mid-1;
      }

      mid=s+(e-s)/2;
    }
return ans;
}



pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int> p;
    p.first=FirstOcc(arr,n,  k);
    p.second=LastOcc(arr ,  n ,  k);
    return p;
    
}
