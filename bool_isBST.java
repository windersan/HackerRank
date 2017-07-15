/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node class is defined as follows:
    class Node {
        int data;
        Node left;
        Node right;
     }
*/

    

    void trav(ArrayList<Integer> a, Node node){
       if(node.left != null){
        trav(a, node.left);
       }
       a.add(node.data);
       if(node.right != null){
           trav(a, node.right);          
       }        
    }


    boolean checkBST(Node root) {
        
        ArrayList<Integer> a = new ArrayList<Integer>();
        
        trav(a,root);
        
        for(int i =0;i < (a.size()-1);i++){
            if(a.get(i) > a.get(i+1)){return false;}
            
            for(int j = (i+1); j < (a.size());j++){
                if(a.get(i)==a.get(j)){return false;}
            }
        }
        
            return true;
        
    }





