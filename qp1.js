function calculateTotal(numbers) {
    total=0;
    for(let i=0;i<numbers.length;i++) {
        total+=numbers[i];
    }
    return total;
}
console.log(calculateTotal([20,35,50]));

function getstatus(total,target=100) {
    if(total>=target) {
        return target_reached;
    } else {
        return target_not_reached;
    }
}
console.log(getstatus(105));