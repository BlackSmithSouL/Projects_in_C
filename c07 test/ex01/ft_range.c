#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	if (min >= max) {
		return NULL;
	}
	int size = max - min;
	int *result = (int *)malloc(size * sizeof(int));
	if (result != NULL) {
		int i = 0;
		while (i < size) {
			result[i] = min + i;
			i++;
		}
	}
	return result;
}

int main() {
	int min = 5;
	int max = 12;
	int *result = ft_range(min, max);
	if(result != NULL) {
		int i = 0;

		while (i < (max - min)) {
			printf("%d ", result[i]);
			i++;
		}
		printf("\n");
		free(result);
	} else {
	printf("Alocation nein\n");
	}
	return (0);
}
