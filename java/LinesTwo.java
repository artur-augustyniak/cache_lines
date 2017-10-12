public  class LinesTwo{


    public static void main(String[] args)
    {
      int i,j;
      int[][] x = new int[4000][4000];
      for (j = 0; j < 4000; j++) 
      {
        for (i = 0; i < 4000; i++) 
        {
          x[j][i] = i + j; }
      }
    }
}
