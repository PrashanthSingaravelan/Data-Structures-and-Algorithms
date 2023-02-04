class sparse_matrix {
    public static void main(String args[]) {
        
        int sparse_matrix[][] = {
            {0, 0, 3, 0, 4},
            {0, 0, 5, 7, 0},
            {0, 0, 0, 0, 0},
            {0, 2, 6, 0, 0}
        };

        // size --> Number of Non-Zero elements
        int size=0;
        for(int i=0;i<4;i++) {
            for(int j=0;j<5;j++) {
                if (sparse_matrix[i][j] != 0) {
                    size++;
                }
            }
        }

// number of columns in compactMatrix (size) must be equal to number of non - zero elements in sparseMatrix
        
        int compactMatrix[][] = new int[3][size];

        int k=0;
        for (int i=0;i<4;i++) {
            for(int j=0;j<5;j++) {
                if (sparse_matrix[i][j] != 0) {
                    compactMatrix[0][k] = i;     // 1st row --> row-index
                    compactMatrix[1][k] = j;     // 2nd row --> column-index
                    compactMatrix[2][k] = sparse_matrix[i][j]; // non-zero value present at that particular row and column
                    k++;
                }
            } 
        }

        for(int i=0;i<3;i++) {
            for(int j=0;j<size;j++) {
                System.out.printf("%d ", compactMatrix[i][j]);
            }
            System.out.printf("\n");          
        }
    }
}