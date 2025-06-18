long long getTrappedWater(long long* arr, int n) {

 int left=0, right=n - 1;

    long long leftMax=0,rightMax=0;

    long long Water=0;

    while (left<right) {

        if (arr[left]<arr[right]) {

            if (arr[left]>leftMax)

                leftMax=arr[left];

            else

                Water+=leftMax-arr[left];

            left++;

        } else {

            if (arr[right]>rightMax)

                rightMax=arr[right];

            else

                Water+=rightMax-arr[right];

            right--;

        }

    }

    return Water;

}