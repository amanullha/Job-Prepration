var countConsistentStrings = function(allowed, words) {
    let count=0;
    for(let word of words)
        {
            let found=1;
            for(let i=0;i<word.length;i++)
                {
                    if(allowed.indexOf(word[i])==-1)
                        {

                        found=0;
                        break;
                        }

                }
            if(found)count++;

        }
    return count;

};
