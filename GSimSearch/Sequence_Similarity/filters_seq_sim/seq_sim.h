#pragma once
#include "graph.h"

double computeSimilarity(Graph &g1, Graph &g2);
int commonVertices(Graph &g1, Graph &g2);
void applyFilters(vector<Graph> &graph_dataset, Graph &query_graph, unordered_set<unsigned> &candidate_graphs, int dataset_size, int choice, double simScore_threshold, long long &loose_filter_count, long long &strong_filter_count, long long &candidate_graph_count);
void preProcess(vector<Graph> &graph_dataset, Graph &query_graph, unordered_set<unsigned> &candidate_pairs);
void bandingTech(vector<Graph> &graph_dataset, Graph &query_graph, unordered_set<unsigned> &candidate_pairs, unordered_set<unsigned> &banding_pairs, int BANDS, int ROWS, long long &banding_pair_count);
