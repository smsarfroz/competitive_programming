    //binary search-last true 
    auto check=[&](int x){

    };
    auto lstrue=[&](int lo,int hi){
        for (--lo; lo < hi; ) {
            int mid = lo+(hi-lo+1)/2;
            if (check(mid)) lo = mid;
            else hi = mid-1;
        }
        return lo;
    };
    
    
    //binary search-first true 
    auto check=[&](int x){

    };
    auto fstrue=[&](int lo,int hi){
        for(hi++;lo<hi;){
            int mid=lo+(hi-lo)/2;
            if(check(mid)) hi=mid;
            else lo=mid+1;
        }
        return lo;
    };
