public  class LinesOne{


    public static void main(String[] args)
    {
      int i,j;
      int[][] x = new int[4000][4000];
      for (i = 0; i < 4000; i++) 
      {
        for (j = 0; j < 4000; j++) 
        {
          x[j][i] = i + j; }
      }
    }
}
