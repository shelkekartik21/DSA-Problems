class MedianFinder
{
public:
    priority_queue<int> mxH;
    priority_queue<int, vector<int>, greater<int>> miH;

    MedianFinder() {}

    void addNum(int num)
    {
        mxH.push(num);
        miH.push(mxH.top());
        mxH.pop();
        if (miH.size() > mxH.size())
        {
            mxH.push(miH.top());
            miH.pop();
        }
    }

    double findMedian()
    {
        if (mxH.size() > miH.size())
            return mxH.top();
        else
            return (mxH.top() + miH.top()) / 2.0;
    }
};
