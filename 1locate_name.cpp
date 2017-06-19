/************************************************************************************************/
/*					PROBLEM INSTRUCTIONS					*/
/************************************************************************************************/

/*
1. The phone is broken and the contacts cannot be viewed.
2. However, James notices a number that is frequently dialed and seeks Sheldon's
help to hack into the internal memory and get the name of the contact.
3. All the phone numbers are inserted into a Binary Search Tree (struct tree)
and the names of contacts into a singly linked-list (struct list).
4. The phone number is stored in a integer variable phone_number and passed 
onto the locate function.
5. The names of contacts in the linked-list correspond with the numbers as
they would appear in an in-order traversal of the BST.
6. For example, if the BST was this
						 		5
		           		3				7
	                2		4		6		8
and the corresponding linked list was A->B->C->D->E->F->G,
then the phone numbers of the contacts A,B,C,D,E,F and G would be 2,3,4,5,6,7 
and 8 respectively.
7. You are required to locate the number in the BST and return from the 'locate' 
function the pointer to the corresponding name in the linked-list. (character pointer).
8. The name is printed in the main function.
*/
#include <iostream>
#include <cstring>
using namespace std;
struct list
{
	char *name;
	struct list *next;
};
typedef struct list node;
struct tree
{
	int num;
	struct tree *left;
	struct tree *right;
}; 
typedef struct tree tree;
int A[100];
void insert(node *, char *);
void insert_tree(tree *, int);
void in_order(tree *);
char* locate(node *, tree *, int);
int main()
{
	int phone_number=948233367;
	char *name;
	node *head=new node;
	tree *root=new tree;
	head->name=new char[10];
	strcpy(head->name,"Elizabeth");
	head->next=NULL;
	root->num=904289383;
	root->left=NULL;
	root->right=NULL;
	insert(head,"Mary");
	insert(head,"Anne");
	insert(head,"Margaret");
	insert(head,"Jane");
	insert(head,"Joan");
	insert(head,"Alice");
	insert(head,"Agnes");
	insert(head,"Susanna");
	insert(head,"Dorothy");
	insert(head,"Catherine");
	insert(head,"Isabel");
	insert(head,"Sarah");
	insert(head,"Elinor");
	insert(head,"Grace");
	insert(head,"Martha");
	insert(head,"Ellen");
	insert(head,"Frances");
	insert(head,"Bridget");
	insert(head,"Margery");
	insert(head,"Judith");
	insert(head,"Barbara");
	insert(head,"Rebecca");
	insert(head,"Joanna");
	insert(head,"Joyce");
	insert(head,"Helen");
	insert(head,"Cecily");
	insert(head,"Hester");
	insert(head,"Thomasin");
	insert(head,"Millicent");
	insert(head,"Hannah");
	insert(head,"Rachel");
	insert(head,"Ursula");
	insert(head,"Amy");
	insert(head,"Patience");
	insert(head,"Christian");
	insert(head,"Janet");
	insert(head,"Clemence");
	insert(head,"Edith");
	insert(head,"Esther");
	insert(head,"Mabel");
	insert(head,"Abigail");
	insert(head,"Emma");
	insert(head,"Florence");
	insert(head,"Honour");
	insert(head,"Lucy");
	insert(head,"Prudence");
	insert(head,"Deborah");
	insert(head,"Gertrude");
	insert(head,"Phyllis");
	insert(head,"Rosamund");
	insert(head,"Rose");
	insert(head,"Kate");
	insert(head,"John");
	insert(head,"Thomas");
	insert(head,"William");
	insert(head,"Richard");
	insert(head,"Robert");
	insert(head,"Edward");
	insert(head,"James");
	insert(head,"George");
	insert(head,"Henry");
	insert(head,"Francis");
	insert(head,"Nicholas");
	insert(head,"Samuel");
	insert(head,"Joseph");
	insert(head,"Anthony");
	insert(head,"Matthew");
	insert(head,"Edmund");
	insert(head,"Christopher");
	insert(head,"Andrew");
	insert(head,"Ralph");
	insert(head,"Michael");
	insert(head,"Peter");
	insert(head,"Philip");
	insert(head,"Daniel");
	insert(head,"Roger");
	insert(head,"Nathaniel");
	insert(head,"Charles");
	insert(head,"Walter");
	insert(head,"Humphrey");
	insert(head,"Alexander");
	insert(head,"Benjamin");
	insert(head,"Hugh");
	insert(head,"Stephen");
	insert(head,"Abraham");
	insert(head,"Bernard");
	insert(head,"Simon");
	insert(head,"Miles");
	insert(head,"Rowland");
	insert(head,"Arthur");
	insert(head,"Jonathan");
	insert(head,"Mark");
	insert(head,"Allen");
	insert(head,"Ellis");
	insert(head,"Martin");
	insert(head,"David");
	insert(head,"Gabriel");
	insert(head,"Jonas");
	insert(head,"Lawrence");
	insert_tree(root,946930886);
	insert_tree(root,981692777);
	insert_tree(root,914636915);
	insert_tree(root,957747793);
	insert_tree(root,924238335);
	insert_tree(root,919885386);
	insert_tree(root,949760492);
	insert_tree(root,996516649);
	insert_tree(root,989641421);
	insert_tree(root,925202362);
	insert_tree(root,950490027);
	insert_tree(root,983368690);
	insert_tree(root,902520059);
	insert_tree(root,944897763);
	insert_tree(root,967513926);
	insert_tree(root,965180540);
	insert_tree(root,940383426);
	insert_tree(root,904089172);
	insert_tree(root,903455736);	
	insert_tree(root,935005211);
	insert_tree(root,921595368);
	insert_tree(root,994702567);
	insert_tree(root,926956429);
	insert_tree(root,936465782);
	insert_tree(root,961021530);
	insert_tree(root,978722862);
	insert_tree(root,933665123);
	insert_tree(root,945174067);
	insert_tree(root,968703135);
	insert_tree(root,901513929);
	insert_tree(root,901979802);
	insert_tree(root,915634022);
	insert_tree(root,935723058);
	insert_tree(root,969133069);
	insert_tree(root,925898167);
	insert_tree(root,959961393);
	insert_tree(root,989018456);
	insert_tree(root,928175011);
	insert_tree(root,956478042);
	insert_tree(root,931176229);
	insert_tree(root,953377373);
	insert_tree(root,959484421);
	insert_tree(root,914544919);
	insert_tree(root,908413784);
	insert_tree(root,956898537);
	insert_tree(root,934575198);
	insert_tree(root,973594324);
	insert_tree(root,949798315);
	insert_tree(root,938664370);
	insert_tree(root,929566413);
	insert_tree(root,984803526);
	insert_tree(root,912776091);
	insert_tree(root,924268980);
	insert_tree(root,911759956);
	insert_tree(root,949241873);
	insert_tree(root,937806862);
	insert_tree(root,942999170);
	insert_tree(root,982906996);
	insert_tree(root,935497281);
	insert_tree(root,911702305);
	insert_tree(root,984420925);
	insert_tree(root,937477084);
	insert_tree(root,927336327);
	insert_tree(root,972660336);
	insert_tree(root,959126505);
	insert_tree(root,905750846);
	insert_tree(root,932621729);
	insert_tree(root,900661313);
	insert_tree(root,933925857);
	insert_tree(root,941616124);
	insert_tree(root,984353895);
	insert_tree(root,939819582);
	insert_tree(root,901100545);
	insert_tree(root,998898814);
	insert_tree(root,948233367);
	insert_tree(root,910515434);
	insert_tree(root,985990364);
	insert_tree(root,974344043);
	insert_tree(root,960313750);
	insert_tree(root,977171087);
	insert_tree(root,956426808);
	insert_tree(root,945117276);
	insert_tree(root,989947178);
	insert_tree(root,980695788);
	insert_tree(root,909393584);
	insert_tree(root,991705403);
	insert_tree(root,918502651);
	insert_tree(root,952392754);
	insert_tree(root,974612399);
	insert_tree(root,953999932);
	insert_tree(root,964095060);
	insert_tree(root,911549676);
	insert_tree(root,943993368);
	insert_tree(root,943947739);
	insert_tree(root,984210012);
	insert_tree(root,955636226);
	insert_tree(root,949698586);
	insert_tree(root,969348094);
	insert_tree(root,956297539);
	name=locate(head,root,phone_number);
	cout<<name;
	
    //in_order(root);
    
    return 0;
}
void insert(node *head, char str[100])
{
	int len;
	node *ptr=head;
	while(ptr->next!=NULL)
		ptr=ptr->next;
	ptr->next=new node;
	len=strlen(str);
	ptr=ptr->next;
	ptr->name=new char[len];
	strcpy(ptr->name,str);
	ptr->next=NULL;
}
void insert_tree(tree *root, int n)
{
	if(root->num>n)
	{
		if(root->left!=NULL)
			insert_tree(root->left,n);
		else
		{
			root->left=new tree;
			root=root->left;
			root->num=n;
			root->left=NULL;
			root->right=NULL;
		}
	}
	else
	{
		if(root->right!=NULL)
			insert_tree(root->right,n);
		else
		{
			root->right=new tree;
			root=root->right;
			root->num=n;
			root->left=NULL;
			root->right=NULL;
		}
	}
}

bool found = false;
int pos = -1;

void get_pos_BST(tree *root, int phone)
{
    if(root == nullptr)
        return;
    if(found == false)
        get_pos_BST(root->left, phone);
    
    if(found == false)
    	pos++;
    if(root->num == phone)
        found=true;
    
    if(found == false)
        get_pos_BST(root->right, phone);
}

int count = -1;
void in_order(tree *root)
{
    if(root == nullptr)
        return;
    in_order(root->left);
    cout << ++count << "->"<< root->num << "\t\t";
    
    in_order(root->right);
}


char* locate(node *head, tree *root, int phone_number)
{
    if(root == nullptr || head == nullptr)
    {
        return "Null Location Error";
    }
    
    get_pos_BST(root, phone_number);
    if(pos == -1)
        return "Not Found";
    
    node *node_ptr = head;
    for(int i=0; i<52; i++)
    {
        if(node_ptr == nullptr)
            return "Name not available";
        node_ptr = node_ptr->next;
    }
    
    return node_ptr->name;    

}