#include <cstdio>
#include <vector>

int main()
{
	long int N{};
	scanf("%ld", &N);

	long int Mid = (N/2) - 1;
	int length_val;
	std::vector<int> icicle;
	int number_destoyed{};

	if (N%2 == 1) // If N is Odd
	{
		for (int i{}; i < N; i++)
		{
			
			scanf("%d", &length_val);
			icicle.push_back(length_val);
			if(i == Mid + 1){continue;} // Only for odd N
			if(i > Mid && icicle.at(i) != icicle.at(((2*Mid)+2)-i)) // 2*Mid + 2 is exclusive to odd N
			{
				number_destoyed += 2;
			}
		}
	}
	else // If N is Even 
	{
		for (int i{}; i < N; i++)
		{
			scanf("%d", &length_val);
			icicle.push_back(length_val);
			if(i > Mid && icicle.at(i) != icicle.at(((2*Mid)+1)-i)) // 2*Mid + 1 is exclusive to even N
			{
				number_destoyed += 2;
			}
		}
	}
	printf("%d", number_destoyed);
	return 0;
}

// * Scratched Ideas //

/*
! Attempt one
void populate_left_right(vector<int> icicles, vector<int> &left_right, int start, int end)
{
	for(int i = start; i <= end; i++)
	{
		left_right.push_back(icicles[i]);
	}
}

main()
{
	vector<int> Icicles;	

	long int N{};
	
	cin >> N;

	Icicles.reserve(N);
	
	for (int i = 0; i < N; i++)
	{
		cin >> Icicles[i];
	}
	
	vector<int> left, right;
	int right_of_mid = N/2;
	left.reserve(right_of_mid);
	right.reserve(right_of_mid);

	switch(N%2)
	{
		case 0:
		{
			// Even N
			populate_left_right(Icicles, left, 0, right_of_mid-1);
			populate_left_right(Icicles, right, right_of_mid, N-1);
		}break;
		default:
		{
			// Odd N
			populate_left_right(Icicles, left, 0, right_of_mid-1);
			populate_left_right(Icicles, right, right_of_mid+1, N-1);	
		}break;
	}
	
	return 0;	
}
*/

/*
! Attempt two
struct icicle
{
	int length;
	long int index;
};

int main(void)
{
	int icicles_destroyed{};
	long int N{};
	
	cin >> N;

	vector<vector<icicle>> Icicle_by_length(10^6);

	icicle temp_icicle;
	int ic_length{};
	for (int i = 0; i < N; i++)
	{
		cin >> ic_length;
		temp_icicle.length = ic_length;
		temp_icicle.index = i;
		Icicle_by_length[temp_icicle.length].push_back(temp_icicle);
	}

	for(int i{}; i < Icicle_by_length.size(); i++)
	{
		if(Icicle_by_length[i].size() > 0)
		{
			for (int j{}; j < Icicle_by_length[i].size() - 1; j++)
			{
				if ((Icicle_by_length[i][j].length == Icicle_by_length[i][j+1].length) && (abs(Icicle_by_length[i][j].index - N) == Icicle_by_length[i][j+1].index))
				{
					icicles_destroyed += 2;
				}
			}
		}
	}

	cout << icicles_destroyed << endl;

	return 0; 
}
*/