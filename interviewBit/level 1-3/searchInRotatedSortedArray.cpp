int Solution::search(const vector<int> &A, int x)
{
    int pivot = -1, n = A.size();
    for (int i = 0; i < n - 1; i++)
    { // finding pivot
        if (A[i] > A[i + 1])
        {
            pivot = i;
            break;
        }
    }

    int l1 = 0, r1 = pivot, l2 = pivot + 1, r2 = n - 1, mid;

    while (l1 <= r1)
    { // BS1
        mid = l1 + (r1 - l1) / 2;
        if (A[mid] == x)
            return mid;
        else if (A[mid] > x)
            r1 = mid - 1;
        else
            l1 = mid + 1;
    }

    while (l2 <= r2)
    { // BS2
        mid = l2 + (r2 - l2) / 2;
        if (A[mid] == x)
            return mid;
        else if (A[mid] > x)
            r2 = mid - 1;
        else
            l2 = mid + 1;
    }

    return -1;
}
