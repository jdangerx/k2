* you can do int - float and it will be ok! C will automatically
  convert the integer to floating point. how weird
* with integer math be careful when dividing it will truncate
* format strings in c look a lot like they do in python how strange.
* seems like symbolic constants are just like preprocessor things?
* we'll get warnings if you put assignments and comparisons together.
  good.
* EOF is just -1 (and `char` can't handle -1 so that's why we use `int`)
* a for loop does work in the declaration - so you can get a useful
  thing with no body.
* how would I test wc? i'd probably pull the output formatting out
  into a separate fn so I can test the word-counting logic. and i'd
  run it against empty, as well as things with like newlines to try to
  confuse the word detection.
* how does getchar work with newlines?
  * something funny with how bash works that there's some line buffer
    that gets fed in?

* why can i assign a new bigger array into line in getline? but not in main?
  * is it because the function sees "hey, i see a pointer to a char
    /shrug", while main says, "hey, I see a char array that goes to 5
    chars"?
    * i changed it to a char * but no luck. now getting garbage out. hmmm!
    * ahh ok so printing out what biggerLongest is - we see that it's only getting the first 5...
      * this is because of the maxline check i put in earlier?
      * hmm but if we get rid of the maxline check how do we copy into
        biggerline?
* to strip comments, we need a rolling buffer of 3 chars :[
