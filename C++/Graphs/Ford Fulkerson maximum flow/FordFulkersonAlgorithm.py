import sys

def BreadthFirstSearch(residual_graph,source,sink,parentTracker):
    queue = []
    visited = []
    
    for x in range(0,N):  ## Initially the visited[] must be 0
        visited.append(0)
    
    visited[source] = True
    queue.append(source)
    parentTracker[source] = -1
    
    while not len(queue) == 0:
        u = queue.pop(0)     ## popping out the element from the queue
        for v in range(0,N): ## comparing the popped element with its neighbours [Exploring]
            if (residual_graph[u][v]>0 and visited[v]==False):  # if there must be a edge and not visited --> then explore
                visited[v] = True
                queue.append(v)
                parentTracker[v] = u
                
    if visited[sink]:   ## sink will hold the last node, if the last node is visited --> then the search is successful and visited
        return True
    else:
        return False

def FordFulkersonAlgorithm(graph,source,sink):
    u,v  = 0,0  # (pointers pointing the inidividual nodes in the graph) [ u --> rows and v --> columns ]
    residual_graph = graph
    maxflow = 0  ## will keep track of the count of maximum flow
    while BreadthFirstSearch(residual_graph,source,sink,parent_tracker): # will return true, false
        ## Upto this we took a path from source to sink
        
        ## Checking the smallest weight from that path
        pathflow = INFINITE
        v = sink
        while not v == source:
            u = parent_tracker[v]
            pathflow = min(pathflow,residual_graph[u][v])  ## smallest weight from that path
            v = parent_tracker[v]
        
        ## Subtracting the weights of the chosen path from the smallest weight
        v = sink
        while not v == source:
            u = parent_tracker[v]
            residual_graph[u][v] = residual_graph[u][v] - pathflow
            residual_graph[v][u] = residual_graph[v][u] - pathflow
            v = parent_tracker[v]
        
        maxflow = maxflow + pathflow
    return maxflow         

if __name__ == "__main__":

    N = 6  ## number of nodes
    parent_tracker = []
    INFINITE = sys.maxsize

    graph = \
    [
        [0,16,13,0,0,0] , 
        [0,0,10,12,0,0],
        [0,4,0,0,14,0],
        [0,0,9,0,0,20],
        [0,0,0,7,0,4],
        [0,0,0,0,0,0]
    ]
    source = 0  ## initial node
    sink = 5  ## final node

    for x in range(0,N):  ## initially all parent trackers are 0
        parent_tracker.append(0)
        
    print("The maximum possible flow : {}".format(FordFulkersonAlgorithm(graph,source,sink)))