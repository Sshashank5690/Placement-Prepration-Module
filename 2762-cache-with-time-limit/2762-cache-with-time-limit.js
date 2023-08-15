var TimeLimitedCache = function() {
    this.cache = {};
};

/** 
 * @param {number} key
 * @param {number} value
 * @param {number} time until expiration in ms
 * @return {boolean} if un-expired key already existed
 */
TimeLimitedCache.prototype.set = function(key, value, duration) {
    let foundHit = key in this.cache;

    const handle = setTimeout(() => delete this.cache[key], duration);
    if(foundHit) {
        clearTimeout(this.cache[key][1]);
    }
    this.cache[key] = [value, handle];

    return foundHit;
};

/** 
 * @param {number} key
 * @return {number} value associated with key
 */
TimeLimitedCache.prototype.get = function(key) {
    if(key in this.cache) {
        // technically speaking, i feel like we need
        // to refresh our time limit here since we are
        // technically accessing this data. but the question says it doesn't.
        return this.cache[key][0];
    }

    return -1;
};

/** 
 * @return {number} count of non-expired keys
 */
TimeLimitedCache.prototype.count = function() {
    return Object.keys(this.cache).length;
};

/**
 * Your TimeLimitedCache object will be instantiated and called as such:
 * var obj = new TimeLimitedCache()
 * obj.set(1, 42, 1000); // false
 * obj.get(1) // 42
 * obj.count() // 1
 */