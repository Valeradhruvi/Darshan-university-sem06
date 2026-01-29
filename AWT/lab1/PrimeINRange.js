function isPrime(num) {
    if (num <= 1) return false;
    for (let i = 2; i <= Math.sqrt(num); i++) {
        if (num % i === 0) return false;
    }
    return true;
}

function findPrimesInRange(start, end) {
    let primes = [];

    if (isNaN(start) || isNaN(end) || start > end) {
        return "Please enter valid start and end numbers (start <= end).";
    }

    for (let i = start; i <= end; i++) {
        if (isPrime(i)) {
            primes.push(i);
        }
    }

   return `Prime numbers between ${start} and ${end}: ${primes.join(', ')}`;
}

console.log(findPrimesInRange(10, 50));
