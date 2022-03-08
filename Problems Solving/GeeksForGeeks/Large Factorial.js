function factorial(a, n){
        //code here
    
    let fac=[];
    fac.push(1);
    
    let i=1;
    
    while(i<1000006)
    {
        fac.push((i*fac[i-1])%1000000007);
        i++;
    }
    
 
    
    for(let i=0;i<n;i++)
    {
        a[i]=fac[a[i]];
    }
    return a;
    }
