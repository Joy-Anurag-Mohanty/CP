#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	std::cout << std::fixed;
    std::cout << std::setprecision(16);

	int A,B,H,M;

	cin>>A>>B>>H>>M;

	double h_ang = 0.5*(H*60 + M);
	double m_ang = 6*M;

	double angle = abs(h_ang - m_ang);

	angle = min(360-angle,angle);


	double rad = M_PI/180;
	rad = angle * rad;

	double cos_val = cos(rad);

	double res = A*A + B*B - 2*A*B*cos_val;

	res = sqrt(res);

	cout<<res<<endl;

	return 0;
}