#ifndef __STATS_H__
#define __STATS_H__


float avg1(unsigned char *p,int size);
/**
 * @brief computes average of dataset
 *
 * This function takes as a input a unsigned char pointer to an n-element data array
 * and  an unsigned integer as the size of the array. It computes the average by dividing
 * the sum of array and the size of array.
 * @param p The pointer to an n-element array
 * @param size Size of the array
 *
 * @return average value of the n-element array
 */

 float med(unsigned char *p,int size);
 /**
  * @brief computes median of dataset
  *
  * This function takes as a input a unsigned char pointer to an n-element data array
  * and  an unsigned integer as the size of the array.
  * @param p The pointer to an n-element array
  * @param size Size of the array
  *
  * @return median value of the n-element array
  */

  int min(unsigned char *p, int size);
  /**
   * @brief finds the minimum value of dataset
   *
   * This function takes as a input a unsigned char pointer to an n-element data array
   * and  an unsigned integer as the size of the array. It computes the minimum by comparing
   * each element of array.
   * @param p The pointer to an n-element array
   * @param size Size of the array
   *
   * @return minimum value of the n-element array
   */

   int max(unsigned char *p, int size);
   /**
    * @brief finds the maximum value of dataset
    *
    * This function takes as a input a unsigned char pointer to an n-element data array
    * and  an unsigned integer as the size of the array. It computes the maximum by comparing
    * each element of array.
    * @param p The pointer to an n-element array
    * @param size Size of the array
    *
    * @return maximum value of the n-element array
    */

    void srtarr(unsigned char *p,int size);
    /**
     * @brief sorts the dataset in ascending order
     *
     * This function takes as a input a unsigned char pointer to an n-element data array
     * and  an unsigned integer as the size of the array. It sorts the array using
     * the bubble sorting algorithm.
     * @param p The pointer to an n-element array
     * @param size Size of the array
     *
     * @return no return value
     */

     void printarr(unsigned char *p,int size);
     /**
      * @brief prints the dataset
      *
      * This function takes as a input a unsigned char pointer to an n-element data array
      * and  an unsigned integer as the size of the array. It prints the array using
      * a for loop.
      * @param p The pointer to an n-element array
      * @param size Size of the array
      *
      * @return no return value
      */

      void printstats();
      /**
       * @brief prints the statistics dataset
       *
       * This function takes as a input a unsigned char pointer to an n-element data array
       * and  an unsigned integer as the size of the array. It prints the statistics of the
       * array.
       * @param p The pointer to an n-element array
       * @param size Size of the array
       *
       * @return no return value
       */
#endif 
