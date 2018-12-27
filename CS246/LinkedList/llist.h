

class Node {
	   private:
		int data;    // different data type for other apps
		Node *next;  // the link pointer to next item
	   public: 
		Node(int x=0,Node * ptr=NULL); // constructor
		int getData();
		Node *getNext();
		void setData(int x);
		void setNext(Node *ptr);
	};

class List {
	   private:
		Node *head_ptr; 
    Node *tail_ptr; 
    int numOfItems;
	   public: 
		List( ); // constructor
		int size( );      
    Node *getHead( );      
    Node *getTail( );
		bool isEmpty( );
		Node *search(int x);         
    Node *itemAt(int position);
		void removeHead(); 	      
    void removeTail(); 
		void remove(int x); // delete leftmost item having x
		void insertHead(int x);       
    void insertTail(int x); 
		void insert(Node *p, int x); 
    void show();
    void reverse();
    int multiplesOf(int x);
};