int main(){
    int ch,ele;
    NODE head;
    head=getnode();
    head->link=head;
    while(1){
    printf("enter the 1  to insert_f \n 2 to insert_r \n 3 to delete_f \n 4 to delete_r\n 5 to display\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("enter the ele\n");
        scanf("%d",&ele);
        insert_hsll_front(head,ele);
         break;
        case 2:
        printf("enter the ele\n");
        scanf("%d",&ele);
      insert_hsll_r(head,ele);
        break;
        case 3:
        delete_front_hsll(head);
        break;
        case 4:
       delete_rear_hsll(head);
        break;
        case 5:
        display_h_csll(head);
        break;
        default:
        exit(0);
 }   
 
}  
}