#ifndef CHAPTER_03_RETWEETCOLLECTION_H_
#define CHAPTER_03_RETWEETCOLLECTION_H_

#include "tweet.h"

class RetweetCollection {
public:
   RetweetCollection() 
      : size_(0) {
   }

   bool isEmpty() const {
      return 0 == size();
   }

   unsigned int size() const {
      return size_;
   }

   void add(const Tweet& tweet) {
      size_ = 1;
   }

private:
   unsigned int size_;
};

#endif  // CHAPTER_03_RETWEETCOLLECTION_H_
