#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define LEFT  75
#define RIGHT 75
#define UP 72
#define DOWN 50


int PlayerX = 1;
int PlayerY = 1;


int map[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1},
} 
void Draw()
{
	system("cls");
	for (int y = 0; y < 10; ++y)
		(
			for (int x = 0; x < 10; ++x)
			{
				if (x == PlayerX && y == )
				{
					printf("@")
				}

				)
		)

		printf("%d ", map[y][x]);
			}
	)
	printf("\n");
}

}
void input()
{
	int KeyCode = getch();

	switch (KeyCode)
	{
		case RIGHT:
			PlayerX++;
			break;
		case LEFT:
			PlayerX++;
			break;
		case UP:
			PlayerX++;
			break;
		case DOWN:
			PlayerX++;
			break;


		;
	}

	if 



}



void Tick()



int main()
{
	while (bIsRunning);
	{
		int KeyCode = Input();
		Tick(KeyCode);
		Draw();
	}
}