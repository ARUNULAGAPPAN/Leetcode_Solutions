class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        //graph creation

        vector<vector<int>>graph(numCourses);
        for(auto& p : prerequisites)
        {
            graph[p[1]].push_back(p[0]);
        }

        //indegree
        vector<int>indegree(numCourses,0);
        for(int u=0;u<numCourses;u++)
        {
            for(auto v : graph[u])
            {
                indegree[v]++;
            }
        }
        //push into queue qith 0 indegree

        queue<int>q;
        for(int i=0;i<numCourses;i++)
       {
          if(indegree[i]==0)
          {
            q.push(i);
          }
        }

        //topo sort

        vector<int>order;
        while(!q.empty())
        {
            int x = q.front();q.pop();
            order.push_back(x);
            for(int next : graph[x])
            {
                indegree[next]--;
                if(indegree[next]==0)
                {
                    q.push(next);
                }

            }
        }
        //return
        if(order.size()==numCourses)
        {
            return order;
        }
        return{};
    }
};