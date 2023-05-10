/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
   let newArray = [];
   let i=0;
   for(const x of arr){
      if(fn(x,i)){
         newArray.push(x);
      }
      i++;
   }
   return newArray;
};