public class Solution {
    public ArrayList<Integer> getRow(int rowIndex) {
          ArrayList<ArrayList<Integer>> al=new ArrayList<ArrayList<Integer>>();
        if (rowIndex<1)
            return al; // take care when rowIndex=0;
        ArrayList<Integer> first=new ArrayList<Integer>();
        first.add(1);
        al.add(first);

        for(int i=1; i<rowIndex; i++)// not i<al.length
        {
            ArrayList<Integer> pre=al.get(i-1);// not al[i] only array use []
            ArrayList<Integer> a=new ArrayList<Integer>();
            a.add(1);// add the first 1
            for (int j=1; j<i;j++)
            {
                a.add(pre.get(j-1)+pre.get(j));
            }
            a.add(1);// add the last 1
            al.add(a);
        }
        return al.get(al.size()-1);
        
    }
}