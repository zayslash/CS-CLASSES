Node::Node(int x, Node * p){ data=x; next=p;}
int Node::getData( ){return data;}
Node * Node::getNext( ){return next;}
void Node::setData(int x) {data=x;}
void Node::setNext(Node *ptr){next=ptr;}

List::List( ){head_ptr= NULL; tail_ptr=NULL; numOfItems=0;}
int List::size( ){return numOfItems;}
Node * List::getHead( ) {return head_ptr;}
Node * List::getTail( ) {return tail_ptr;}
bool List::isEmpty() {return (numOfItems==0);}

Node *List::search(int x){
		Node * currentPtr = getHead( );
		while (currentPtr != NULL){
			if (currentPtr->getData( ) == x)
				return currentPtr;
			else
				 currentPtr = currentPtr->getNext();
		}
		 return NULL;	// Now x is not, so return NULL
 	}

   Node *List::itemAt(int position){
	if (position<0 || position>=numOfItems) 
		     return NULL;
	Node * currentPtr = getHead( );
	for(int k=0;k != position; k++)
		    currentPtr = currentPtr -> getNext( );
	 return currentPtr;
}

void List::removeHead( ){
		if (numOfItems == 0)
			return;
		Node * currentPtr = getHead( );
		head_ptr=head_ptr->getNext( );
		delete currentPtr;
		numOfItems--;
	}

  void List::removeTail( ){
		if (numOfItems == 0)
			return;
		 if (head_ptr == tail_ptr){
		  	head_ptr=NULL; tail_ptr= NULL; 
			numOfItems=0; return; }
		Node * beforeLast = itemAt(numOfItems-2);
		beforeLast->setNext(NULL); // beforeLast becomes last
		delete tail_ptr;   // deletes the last object 
		tail_ptr=beforeLast;
		 numOfItems--;
	}

void List::remove(int x){
		if (numOfItems == 0)  return;
		if (head_ptr==tail_ptr && head_ptr->getData()==x){
		     head_ptr=NULL; tail_ptr= NULL; numOfItems=0; return; }
		Node * beforePtr=head_ptr;  // beforePtr trails currentPtr
		Node * currentPtr=head_ptr->getNext();
		Node * tail = getTail();
		while (currentPtr != tail)
		      if (currentPtr->getData( ) == x){ // x is found. Do the bypass
		            beforePtr->setNext(currentPtr->getNext());
		            delete currentPtr;     numOfItems--;   }
		      else {  // x is not found yet. Forward beforePtr & currentPtr.
		            beforePtr = currentPtr; 
		            currentPtr = currentPtr->getNext();   }
	}

  void List::insertHead(int x){
		Node * newHead = new Node(x,head_ptr);
		head_ptr= newHead;
		if (tail_ptr == NULL) // only one item in list
		   tail_ptr = head_ptr;
		numOfItems++;
}

void List::insertTail(int x){
		if (isEmpty())
		   insertHead(x);
     else{
           Node * newTail = new Node(x);
		     tail_ptr->setNext(newTail);
		     tail_ptr = newTail;  
         numOfItems++;
     } 	
}

// inserts item x after the item pointed to by p		
void List::insert(Node *p, int x){
		Node *currentPtr = head_ptr;
		while(currentPtr !=NULL && currentPtr != p)
			 currentPtr = currentPtr->getNext();
		if (currentPtr != NULL ) { // p is found
		     Node *newNd=new Node(x,p->getNext());
		     p->setNext(newNd);
		     numOfItems++;
		}
	}

void List::show(){
  
Node *i=head_ptr;

while (i != NULL){
std::cout<< i->getData() << " " ;
i=i->getNext();
}

}

void List::reverse(){
  
  Node *curr = getHead();
  Node *prev = NULL;
  Node *next = NULL;

	while(curr != NULL)
	{
    next =(curr->getNext());
    curr->setNext(prev);
    prev = curr;
    curr =next;
	}
  
  head_ptr = prev ;

}

 int List::multiplesOf(int x){
   int count = 0;
   Node * curr = getHead();

   while(curr !=NULL){
     if (curr->getData() % x == 0)
     count++;
     curr=curr->getNext();
   }
return count;

 }