
 #include<stdio.h>
 void rotate_array(int *numbers, int number_of_elements, int rotations);

int main() {
    int number_tests = 0, number_of_elements = 0, rotations = 0, mod = 0;
    printf("Enter the no of test ");
    scanf("%d", &number_tests);
for(int i = 0; i < number_tests; i++){
        printf("Enter the no of elements and no of rotation ");
   scanf("%d %d", &number_of_elements, &rotations);
int *numbers = (int)malloc(sizeof(int) * number_of_elements);
for(int j = 0; j < number_of_elements; j++) {
scanf("%d", &numbers[j]);
}
if(number_of_elements >= rotations) {
rotate_array(numbers, number_of_elements, rotations);
}
else {
mod = (rotations % number_of_elements);
rotate_array(numbers, number_of_elements, mod + 1);
}

}
return 0;
}

void rotate_array(int *numbers, int number_of_elements, int rotations){

for(int i = rotations; i < number_of_elements; i++) {
printf("%d ", numbers[i]);
}
for(int i = 0; i < rotations; i++) {
printf("%d ", numbers[i]);
}
printf("\n");
}
