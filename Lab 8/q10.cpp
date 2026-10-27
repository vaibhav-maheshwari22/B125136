#include <iostream>

using namespace std;

class Recommender {
public:
    virtual void generateRecommendation(int rating, int pop) = 0;
};

class PersonalizedRecommender : public Recommender {
public:
    void generateRecommendation(int rating, int pop) override {
        double score = 0.7 * rating + 0.3 * pop;
        cout << "Personalized score: " << score << endl;
    }
};

class TrendingRecommender : public Recommender {
public:
    void generateRecommendation(int rating, int pop) override {
        double score = 0.3 * rating + 0.7 * pop;
        cout << "Trending score: " << score << endl;
    }
};

int main() {
    PersonalizedRecommender pr;
    TrendingRecommender tr;
    Recommender* r1 = &pr;
    Recommender* r2 = &tr;
    r1->generateRecommendation(80, 90);
    r2->generateRecommendation(80, 90);
    return 0;
}