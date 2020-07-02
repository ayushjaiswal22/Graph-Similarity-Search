#pragma once
#include "graph.h"

void preProcess(vector<Graph> &graph_dataset, int choice);
void applyFilters(vector<Graph> &graph_dataset, vector<bool> &candidate_graphs, unordered_map<unsigned, unordered_set<unsigned> > &candidate_pairs, int dataset_size, int choice, double simScore_threshold, unsigned long &loose_size_filter, unsigned long &strong_size_filter);
int commonVertices(Graph &g1, Graph &g2);
double computeSimilarity(Graph &g1, Graph &g2);
void computeMinHashes(vector<int> &shingles, vector<int> &minhashes);
void bandingTech(vector<Graph> &graph_dataset, vector<bool> &candidate_graphs, unordered_map<unsigned, unordered_set<unsigned> > &banding_candidate_pairs, int BANDS, int ROWS);
