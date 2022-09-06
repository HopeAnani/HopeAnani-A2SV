class Solution {
    public int[][] kClosest(int[][] points, int k) {
        Queue<int[]> maxHeap = new PriorityQueue<>((a,b)-> dist(b)-dist(a));
        for(int[] point : points){
            maxHeap.add(point);
            if(maxHeap.size()>k){
                maxHeap.poll();
            }
        }
        int[][] result  = new int[k][2];
        int i = 0;
        while(maxHeap.isEmpty() == false){
            result[i++] = maxHeap.poll();
        }
        
        return result;
    }
    private int dist(int[] points){
        int x = points[0];
        int y = points [1];
        return x*x + y*y;
    }
}
