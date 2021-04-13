#include <iostream>

int main() {
    int num_friends, fence_height;
    int normal_width = 1;
    int bend_width = 2;
    int total_width = 0;
    std::cin>>num_friends;
    std::cin>>fence_height;

    for(int i = 0; i < num_friends; i++){
        int friend_height = 0;
	std::cin>>friend_height;
        if(friend_height > fence_height){
	    total_width += bend_width;
	}	
	else{
	    total_width += normal_width;
	}
    }
    std::cout<<total_width;
    return 0;
}
