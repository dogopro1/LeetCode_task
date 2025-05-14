var lengthOfLastWord = function(s) {
    s = s.trim(); //bez spacji 
    const words = s.split(' '); // na slowa dzielnie 
    return words[words.length - 1].length; // dlugosc ostatniego slowa
};
