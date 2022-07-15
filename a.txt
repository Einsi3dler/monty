/*
 * *******Note***************
 * create a doubly linked list
 * create a new new node
 * add data to node
 * always add new data at the beginning of list
 * and pull only at the beginning of list
 *
 * make sure there is a fix size of element to be in the list
 * buffer should take care of that
 * */



/*
 * void push(stack_t **stack, unsigned int line_number)
 * {
 * 	stack=>top = stackSize - 1
 * 	if (stackFull(stack))
 * 		return Error message
 * 	else
 * 		increase stack=>top
 * 		stack=>prev = stack=>top
 * }
*/

void push(stack_t **stack, unsigned int line_number)
{
   if(!isFull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}
