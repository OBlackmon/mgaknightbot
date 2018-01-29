#include "superHappyFace.h"

/*
lc is the object that controls and displays the light on each matrix
direction is a boolean that is false when down and true when up
*/

/*
Constructor method ---DO NOT TOUCH----
*/
superHappyFace::superHappyFace(){

}

/*
This method is called by the Arduino in the main file. 
Make sure the text before the "::" matches the name of the file
			---DO NOT EDIT CONTENTS----
*/
void superHappyFace::display(LedControl lc, int iterator, bool direction){

	displayPupil(lc, iterator, direction);
	sweepAnim(lc, iterator, direction);
	
}

/*
sweepAnim() is the function that houses the instructions for the eye animation 
Make sure the text before the "::" matches the name of the file
*/

void superHappyFace::sweepAnim(LedControl lc, int iterator, bool direction){

	//Logic used to determine what to make the row number
  int row = currentRow(iterator, direction);

  

  
}

/*
displayPupil() is the function that houses the static display for each eye
Make sure the text before the "::" matches the name of the file
*/

void superHappyFace::displayPupil(LedControl lc, int iterator, bool direction){

	//iterator row
  int row = currentRow(iterator, direction);
  
  //First Eye
  
  lc.setRow(0, 0, 48);
  lc.setRow(0, 1, 24);
  lc.setRow(0, 2, 12);
  lc.setRow(0, 3, 6);
  lc.setRow(0, 4, 6);
  lc.setRow(0, 5, 12);
  lc.setRow(0, 6, 24);
  lc.setRow(0, 7, 48);
  
  
  //Second Eye
  lc.setRow(1, 0, 12);
  lc.setRow(1, 1, 24);
  lc.setRow(1, 2, 48);
  lc.setRow(1, 3, 96);
  lc.setRow(1, 4, 96);
  lc.setRow(1, 5, 48);
  lc.setRow(1, 6, 24);
  lc.setRow(1, 7, 12);
  
}