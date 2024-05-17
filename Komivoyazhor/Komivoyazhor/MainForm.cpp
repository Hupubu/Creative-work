#include "MainForm.h"
#include <Windows.h>
#include <vector>
#include <queue>
#include <string>
#include <stdlib.h>
#include <algorithm>

using namespace Komivoyazhor; // �������� �������


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MainForm);

    return 0;

}
template <class T>
class Graph
{
public:
    //������ �����
    std::vector<std::vector<int>> UzelList;
    //������ �����
    std::vector<std::vector<int>> RebroList;
    //������� ���������
    std::vector<std::vector<int>> matrixSmezhosty;
    //������ ������� ������ � ������� ���������
    int maxSize;
    //������� �����
    std::queue<T> UzelsQueue;
    //������ ����������
    std::vector<int> labelList;
public:
    Graph(const int& size, const int& colvoReber)
    {
        this->maxSize = size;
        this->matrixSmezhosty = std::vector<std::vector<T>>(size, std::vector<T>(size));
        for (int i = 0; i < this->maxSize; i++)
        {
            for (int j = 0; j < this->maxSize; j++)
            {
                this->matrixSmezhosty[i][j] = -1;
            }
        }
    }
    bool IsFull();//�������� ����� �� ���������������
    bool IsEmpty();//�������� ����� �� �������
    void InsertUzel(const T& NameUzel, const int x, const int y, TextBox^ textBox_console);//�������� ����
    int GetUzelPos(const T& NameUzel);//�������� ������� (������) ����
    std::pair<int, int> GetIncidentRebry(const T& indexRebra);//�������� ��������� �����
    int GetColvoUzel();//�������� ���������� �����
    int GetWeight(const T& nameUzel1, const T& nameUzel2);//��������� ���� �����
    void Print(TextBox^ textBox_console);//������ �����
    void lnsertRebro(const T& NameUzel1, const T& NameUzel2, const int& vecRebra, const int X, const int Y, TextBox^ textBox_console);//������� �����
    void DeleteRebro(const int& NameUzel1, const int& NameUzel2);//�������� �����
    void DeleteUzel(const int NameUzel);//�������� ����
    int Graph<T>::GetIndexRebra(const T& nameUzel1, const T& nameUzel2);
    void Graph<T>::DFS(T startUzel, bool* visitedUzels, TextBox^ textBox_console);//����� � �������
    void Graph<T>::BFS(T startUzel, bool* visitedUzels, TextBox^ textBox_console);//����� � ������
    std::vector<T> Graph<T>::GetNbrs(const T& uzel);//��������� ������� �������
    void Graph<T>::RedactVesRebro(const int& x, const int& y, const T& newName);
    void Graph<T>::FillLabels(T& startUzel);//���������� ����� ����������
    bool Graph<T>::AllVisited(std::vector<bool>& visitedUzels);//���������, ��� �� ���� ���� �������� 
    void Graph<T>::Dijkstra(T startUzel, TextBox^ textBox_console);//�������� ��������
    std::vector<std::vector<int>> Graph<T>::matrixSmezhostyWeight();//������� ��������� � ����� (� �� ��������� �����)
    std::vector<int> Graph<T>::MinI(std::vector<std::vector<int>> matrix);//������� �� ������
    std::vector<std::vector<int>> Graph<T>::ReductLinesMatrix(std::vector<int>& minWeights, std::vector<std::vector<int>>& Matrix);//�������� �����
    std::vector<int> Graph<T>::MinJ(std::vector<std::vector<int>> ReductMatrix);//������� �� �������
    std::vector<std::vector<int>> Graph<T>::ReductColumnsMatrix(std::vector<int>& minWeights, std::vector<std::vector<int>>& Matrix);//�������� ��������
    std::pair<int, int> Graph<T>::NullNaib(std::vector<std::vector<int>> Matrix);//����� �������� �������� � ���������� �������
    std::vector<std::vector<int>> Graph<T>::ReductMatrix(std::pair<int, int>& p, std::vector<std::vector<int>>& Matrix);//�������� �������
    std::vector<int> Graph<T>::PreparationWays(std::vector<std::vector<int>>& ways);
    int Graph<T>::LengthWay(std::vector<int>& way);
    std::vector<int> Graph<T>::Komivoyazhor(std::vector<std::vector<int>>& matrix);//�������� ����������
};
template <class T>
int Graph<T>::LengthWay(std::vector<int>& way)
{
    std::vector<std::vector<int>> matrix = this->matrixSmezhostyWeight();
    int sumLength = 0;
    for (int i = 0; i < way.size() - 1; i++)
    {
        sumLength += matrix[way[i]][way[i + 1]];
    }
    return sumLength;
}
template <class T>
std::vector<std::vector<int>> Graph<T>::ReductMatrix(std::pair<int, int>& p, std::vector<std::vector<int>>& Matrix)
{
    for (int i = 0; i < this->UzelList.size(); i++)
    {
        Matrix[p.first][i] = -1;
    }
    for (int i = 0; i < this->UzelList.size(); i++)
    {
        Matrix[i][p.second] = -1;
    }
    Matrix[p.second][p.first] = -1;
    return Matrix;
}
template <class T>
std::vector<int> Graph<T>::PreparationWays(std::vector<std::vector<int>>& ways)
{
    std::vector<int> way;
    way.push_back(0);
    for (int i = 0; i < ways.size(); i++)
    {
        if (ways[i][0] == way.back())
        {
            way.push_back(ways[i][1]);
            ways.erase(ways.begin() + i);
            i = -1;
        }
    }
    return way;
}
template <class T>
std::vector<int> Graph<T>::Komivoyazhor(std::vector<std::vector<int>>& matrix)
{
    bool flag = true;
    std::vector<std::vector<int>> ways;
    do
    {
        std::vector<int> di = MinI(matrix);//������� �� �������
        std::vector<std::vector<int>> ReductLinesMatrix = this->ReductLinesMatrix(di, matrix);//�������� �����
        std::vector<int> dj = MinJ(ReductLinesMatrix);//������� �� ��������
        std::vector<std::vector<int>> ReductColumnsMatrix = this->ReductColumnsMatrix(dj, ReductLinesMatrix);//�������� ��������
        std::pair<int, int> p = NullNaib(ReductColumnsMatrix);//������� ������� ������ � ���������� �������
        matrix = this->ReductMatrix(p, ReductColumnsMatrix);//�������� �������
        if (p.first != p.second != 0)
        {
            std::vector<int> Temp; Temp.push_back(p.first); Temp.push_back(p.second);
            ways.push_back(Temp);
            Temp.clear();
        }
        else
        {
            flag = false;
            std::vector<int> way;
            way = this->PreparationWays(ways);
            way.push_back(this->LengthWay(way));
            return way;
        }
    }
    while (flag);
}
template <class T>
std::pair<int, int> Graph<T>::NullNaib(std::vector<std::vector<int>> Matrix)
{
    std::vector<std::vector<int>> assessment;
    for (int i = 0; i < this->UzelList.size(); i++)
    {
        for (int j = 0; j < this->UzelList.size(); j++)
        {
            if (Matrix[i][j] == 0)
            {
                int minElementLine = INT_MAX;
                for (int k = 0; k < this->UzelList.size(); k++)
                {
                    if (Matrix[i][k] < minElementLine && Matrix[i][k] != -1 && k != j)
                        minElementLine = Matrix[i][k];
                }
                int minElementColumn = INT_MAX;
                for (int k = 0; k < this->UzelList.size(); k++)
                {
                    if (Matrix[k][j] < minElementColumn && Matrix[k][j] != -1 && k != i)
                        minElementColumn = Matrix[k][j];
                }
                std::vector<int> Temp;
                if (minElementLine == INT_MAX) minElementLine = 0;
                if (minElementColumn == INT_MAX) minElementColumn = 0;
                Temp.push_back(minElementLine + minElementColumn);
                Temp.push_back(i);
                Temp.push_back(j);
                assessment.push_back(Temp);
                Temp.clear();
            }
        }
    }
    int maxAssessment = -1;
    std::pair<int, int> p;
    for (int i = 0; i < assessment.size(); i++)
    {
        if (assessment[i][0] > maxAssessment) {
            p.first = assessment[i][1];
            p.second = assessment[i][2];
            maxAssessment = assessment[i][0];
        }
    }
    return std::pair<int, int>(p);
}
template <class T>
std::vector<std::vector<int>> Graph<T>::matrixSmezhostyWeight()
{
    std::vector<std::vector<int>> matrixSmezhostyWeight = std::vector<std::vector<T>>(this->UzelList.size(), std::vector<T>(this->UzelList.size()));
    for (int i = 0; i < this->UzelList.size(); i++)
    {
        for (int j = 0; j < this->UzelList.size(); j++)
        {
            if (this->matrixSmezhosty[i][j] != -1)
                matrixSmezhostyWeight[i][j] = this->RebroList[this->matrixSmezhosty[i][j]][0];
            else matrixSmezhostyWeight[i][j] = -1;
        }
    }
    return matrixSmezhostyWeight;
}

template <class T>
std::vector<std::vector<int>> Graph<T>::ReductColumnsMatrix(std::vector<int>& minWeights, std::vector<std::vector<int>>& Matrix)
{
    std::vector<std::vector<int>> matrixReduct = std::vector<std::vector<T>>(this->UzelList.size(), std::vector<T>(this->UzelList.size()));
    for (int i = 0; i < this->UzelList.size(); i++)
    {
        for (int j = 0; j < this->UzelList.size(); j++)
        {
            int weight = Matrix[j][i];
            if (weight != -1)
                matrixReduct[j][i] = weight - minWeights[i];
            else matrixReduct[j][i] = -1;
        }
    }
    return matrixReduct;
}
template <class T>
std::vector<int> Graph<T>::MinJ(std::vector<std::vector<int>> ReductMatrix)
{
    std::vector<int> minWeights;
    for (int i = 0; i < this->UzelList.size(); i++)
    {
        int minWeight = INT_MAX;
        for (int j = 0; j < this->UzelList.size(); j++)
        {
            int weight = ReductMatrix[j][i];
            if (weight < minWeight && weight != -1)
                minWeight = weight;
        }
        if (minWeight != INT_MAX)
            minWeights.push_back(minWeight);
        else minWeights.push_back(-1);
    }
    return minWeights;
}
template <class T>
std::vector<std::vector<int>> Graph<T>::ReductLinesMatrix(std::vector<int>& minWeights, std::vector<std::vector<int>>& Matrix)
{
    std::vector<std::vector<int>> matrixReduct = std::vector<std::vector<T>>(this->UzelList.size(), std::vector<T>(this->UzelList.size()));
    for (int i = 0; i < this->UzelList.size(); i++)
    {
        for (int j = 0; j < this->UzelList.size(); j++)
        {
            int weight = Matrix[i][j];
            if (weight != -1)
                matrixReduct[i][j] = weight - minWeights[i];
            else matrixReduct[i][j] = -1;
        }
    }
    return matrixReduct;
}
template <class T>
std::vector<int> Graph<T>::MinI(std::vector<std::vector<int>> matrix)
{
    std::vector<int> minWeights;
    for (int i = 0; i < this->UzelList.size(); i++)
    {
        int minWeight = INT_MAX;
        for (int j = 0; j < this->UzelList.size(); j++)
        {
            int weight = matrix[i][j];
            if (weight < minWeight && weight != -1)
                minWeight = weight;
        }
        if (minWeight != INT_MAX)
        minWeights.push_back(minWeight);
        else minWeights.push_back(-1);
    }
    return minWeights;
}
template <class T>
void Graph<T>::FillLabels(T& startUzel)
{
    labelList = std::vector<T>(UzelList.size());
    //���������� ����� ����������
    for (int i = 0, size = this->UzelList.size(); i < size; ++i) 
        this->labelList[i] = 1000000; 
    int pos = GetUzelPos(startUzel);
    this->labelList[pos] = 0;
}
template <class T>
bool Graph<T>::AllVisited(std::vector<bool>& visitedUzels)
{
    //���������, ��� �� ���� ���� �������� 
    bool flag = true;
    for (int i = 0; i < this->UzelList.size(); i++) 
        if (visitedUzels[i] != true) flag = false; 
    return flag;

}
template <class T>
void Graph<T>::Dijkstra(T startUzel, TextBox^ textBox_console)
{
    
    if (GetUzelPos(startUzel) == -1)
    {
        return;
    }
    std::vector<bool> visitedUzels(this->UzelList.size());
    fill(visitedUzels.begin(), visitedUzels.end(), false);

    this->FillLabels(startUzel);
    T curScr = startUzel;
    std::vector<T> neighbors;

    while (!this->AllVisited(visitedUzels))
    {
        neighbors = this->GetNbrs(curScr);
        int startLabel = labelList[GetUzelPos(curScr)];
        //����� ������� ����� 
        T* minNeighbor_ptr = nullptr;
        int minW = 1000000;
        for (int i = 0; i < neighbors.size(); ++i)
        {
            int weight = this->GetWeight(curScr, neighbors[i]);
            int nIndex = this->GetUzelPos(neighbors[i]);
            int nextLabel = labelList[nIndex];
            if (startLabel + weight < nextLabel)
            {
                labelList[nIndex] = startLabel + weight;
            }
            if (!visitedUzels[nIndex] && minW > labelList[nIndex])
            {
                minW = labelList[nIndex];
                minNeighbor_ptr = &neighbors[i];
            }
        }
        visitedUzels[GetUzelPos(curScr)] = true;
        if (minNeighbor_ptr != nullptr)
        {
            curScr = *minNeighbor_ptr;
        }
        if (!this->AllVisited(visitedUzels) && visitedUzels[GetUzelPos(curScr)] == true)
        {
            break;
        }
    }
    /* ����� ���������� ������ ��������� �� ����� */ 
    for (int i = 0; i < GetUzelPos(startUzel); ++i)
    {
        textBox_console->Text += "���������� ���������� �� ������� " + startUzel + " �� ������� " + UzelList[i][0].ToString() + " ����� "+ labelList[GetUzelPos(UzelList[i][0])].ToString() + "\r\n";
    }
    for (int i = GetUzelPos(startUzel) + 1; i < UzelList.size(); ++i)
    {
        textBox_console->Text += "���������� ���������� �� ������� "+ startUzel + " �� ������� " + UzelList[i][0].ToString() + " ����� " + labelList[GetUzelPos(UzelList[i][0])].ToString() + "\r\n";
    }
}
template <class T>
std::vector<T> Graph<T>::GetNbrs(const T& uzel)
{
    std::vector<T> nbrsList;//�������� ������ �������
    int pos = this->GetUzelPos(uzel); //���������� ������� uzel � ������� ��������� 
    if (pos != -1)
    {
        //��������, ��� uzel ���� � ������� ���������
        for (int i = 0; i < this->UzelList.size(); ++i)
        {
            if (this->matrixSmezhosty[pos][i] != -1)
            {
                nbrsList.push_back(this->UzelList[i][0]);
            }
        }
    }
    return nbrsList; // ������� ������ �������
}
template<class T>
void Graph<T>::RedactVesRebro(const int& x, const int& y, const T& newName)
{
    for (int i = 0; i < this->RebroList.size(); i++)
    {
        if (this->RebroList[i][1] == x && this->RebroList[i][2] == y)
        {
            this->RebroList[i][0] = newName;
        }
    }
    
}
template <class T >
void Graph<T>::DFS(T startUzel, bool* visitedUzels, TextBox^ textBox_console)
{
    textBox_console->Text += "������� " + startUzel + " �������� \r\n";
    visitedUzels[this->GetUzelPos(startUzel)] = true;
    std::vector<T> neighbors = this->GetNbrs(startUzel);
    for (int i = 0; i < neighbors.size(); ++i)
    {
        if (!visitedUzels[this->GetUzelPos(neighbors[i])])
        {
            this->DFS(neighbors[i], visitedUzels, textBox_console);
        }
    }
}
template <class T>
void Graph<T>::BFS(T startUzel, bool* visitedUzels, TextBox^ textBox_console)
{
    //������� ������� ������ ��� ������ ������ ������� 
    if (visitedUzels[this->GetUzelPos(startUzel)] == false)
    {
        this->UzelsQueue.push(startUzel);
        visitedUzels[this->GetUzelPos(startUzel)] = true;
        textBox_console->Text += "������� " + startUzel + " ����������\r\n";
    }
    std::vector<T> neighbors = this->GetNbrs(startUzel); 
    this->UzelsQueue.pop();
    for (int i = 0; i < neighbors.size(); ++i)
    {
        if (!visitedUzels[this->GetUzelPos(neighbors[i])])
        {
            this->UzelsQueue.push(neighbors[i]);
            visitedUzels[this->GetUzelPos(neighbors[i])] = true;
            textBox_console->Text += "������� " + neighbors[i] + " ����������\r\n";
        }
    }
    if (this->UzelsQueue.empty())
    {
        return;
    }
    BFS(UzelsQueue.front(), visitedUzels, textBox_console);
}
template <class T>
inline bool Graph<T>::IsFull()
{
    return this->UzelList.size() == this->maxSize;
}
template <class T>
inline bool Graph<T>::IsEmpty()
{
    return this->UzelList.size() == 0;
} 
template <class T>
inline int Graph<T>::GetUzelPos(const T& uzel)
{
    for (int i = 0; i < this->UzelList.size(); i++)
    {
        if (this->UzelList[i][0] == uzel)
        {
            return i;
        }
    }
    return -1;
}
template <class T>
inline std::pair<int, int> Graph<T>::GetIncidentRebry(const T& indexRebra)
{
    for (int i = 0; i < this->maxSize; i++)
    {
        for (int j = 0; j < this->maxSize; j++)
        {
            if (this->matrixSmezhosty[i][j] == indexRebra)
            {
                return std::pair<int, int>(i, j);
            }
        }
    }
}
template <class T>
inline int Graph<T>::GetIndexRebra(const T& NameUzel1, const T& NameUzel2)
{
    int indexU1 = this->GetUzelPos(NameUzel1);
    int indexU2 = this->GetUzelPos(NameUzel2);
    return matrixSmezhosty[indexU1][indexU2];
}
template <class T>
inline int Graph<T>::GetColvoUzel()
{
    return this->UzelList.size();
}
template <class T>
inline int Graph<T>::GetWeight(const T& nameUzel1, const T& nameUzel2)
{
    if (this->IsEmpty())
    {
        return 0;
    }
    int uzel1_pos = this->GetUzelPos(nameUzel1);
    int uzel2_pos = this->GetUzelPos(nameUzel2);
    if (uzel1_pos == -1 || uzel2_pos == -1)
    {
        return 0;
    }
    if (this->matrixSmezhosty[uzel1_pos][uzel2_pos] < 0) return -1;
    return this->RebroList[this->matrixSmezhosty[uzel1_pos][uzel2_pos]][0];
}
template <class T>
void Graph<T>::InsertUzel(const T& nameUzel, const int x, const int y, TextBox^ textBox_console)
{
    if (!this->IsFull())
    {
        int indexPust = -1;
        for (int i = 0; i < UzelList.size(); i++)//������� � �������� �� �� �������, � ������ �������������� �� "������" �����, ���� ��������� ����� ������
        {
            if (UzelList[i][0] == -1) {
                indexPust = i; break;
            }
        }
        //����������� ��������� ����
        std::vector<T> Temp;
        Temp.push_back(nameUzel);
        Temp.push_back(x);
        Temp.push_back(y);
        if (indexPust == -1)
        {
            this->UzelList.push_back(Temp);
        }
        else
        {
            this->UzelList[indexPust][0] = nameUzel;
            this->UzelList[indexPust][1] = x;
            this->UzelList[indexPust][2] = y;
        }
        Temp.clear();
    }
    else textBox_console->Text += "���� ����������";
}
template<class T>
void Graph<T>::lnsertRebro(const T& NameUzel1, const T& NameUzel2, const int& vecRebra, const int X,  const int Y, TextBox^ textBox_console)
{
    int uzelPos1 = this->GetUzelPos(NameUzel1),
        uzelPos2 = this->GetUzelPos(NameUzel2);
    if (uzelPos1 != (-1) && uzelPos2 != (-1))
    {
        if (this->matrixSmezhosty[uzelPos1][uzelPos2] != -1 && this->matrixSmezhosty[uzelPos2][uzelPos1] != -1 )
        {
            textBox_console->Text += "����� ����� ��������� ��� ����.\r\n";
        }
        else
        {
            int indexPust = -1;
            for (int i = 0; i < RebroList.size(); i++)
            {
                if (RebroList[i][0] == -1) {
                    indexPust = i; break;
                }
            }
            //���������� � ������ ����� ������ �����
            std::vector<T> Temp;
            Temp.push_back(vecRebra);
            Temp.push_back(X);
            Temp.push_back(Y); 
            if (indexPust == -1)
            {
                this->RebroList.push_back(Temp);
                this->matrixSmezhosty[uzelPos1][uzelPos2] = this->matrixSmezhosty[uzelPos2][uzelPos1] = RebroList.size() - 1;
            }
            else
            {
                this->RebroList[indexPust][0] = vecRebra;
                this->RebroList[indexPust][1] = X;
                this->RebroList[indexPust][2] = Y;
                this->matrixSmezhosty[uzelPos1][uzelPos2] = this->matrixSmezhosty[uzelPos2][uzelPos1] = indexPust;
            }
            Temp.clear();
        }
    }
    else
    {
        textBox_console->Text += "����� ������ (��� ����� �� ���) ��� � �����.\r\n";
    }
}
template <class T >
void Graph<T>::Print(TextBox^ textBox_console)
{
    if (!this->IsEmpty())
    {
        textBox_console->Text += "������� ���������:\r\n";
        textBox_console->Text += String::Format("{0,5:F4}", "-");
        for (int i = 0; i < this->UzelList.size(); i++)
        {
            if(this->UzelList[i][0] != -1)
            textBox_console->Text += String::Format("{0,6:F5}", (i + 1).ToString());
        }
        textBox_console->Text += "\r\n";
        for (int i = 0; i < this->UzelList.size(); i++)
        {
            if (this->UzelList[i][0] != -1)
            {
                textBox_console->Text += String::Format("{0,5:F4}", (i + 1).ToString());
                for (int j = 0; j < this->UzelList.size(); j++)
                {
                    String^ string = "-1";
                    if (this->matrixSmezhosty[i][j] != -1) string = this->RebroList[this->matrixSmezhosty[i][j]][0].ToString();
                    textBox_console->Text += String::Format("{0,5:F4}", string);
                }
                textBox_console->Text += "\r\n";
            }
        }
        textBox_console->Text += "\r\n";
    }
    else textBox_console->Text += "���� ����.";
}
template <class T>
inline void Graph<T>::DeleteUzel(const int NameUzel)
{
    if (!this->IsEmpty())
    {
        int indexUzelDelete = this->GetUzelPos(NameUzel);
        for (int i = 0; i < this->UzelList.size(); i++)
        {
            this->matrixSmezhosty[i][indexUzelDelete] = -1;
        }
        for (int i = 0; i < this->UzelList.size(); i++)
        {
            this->matrixSmezhosty[indexUzelDelete][i] = -1;
        }
        this->UzelList[indexUzelDelete][0] =
            this->UzelList[indexUzelDelete][1] =
            this->UzelList[indexUzelDelete][2] = -1;
    }
}
template <class T>
inline void Graph<T>::DeleteRebro(const int& NameUzel1, const int& NameUzel2)
{
    int indexRebroDelete = this->GetIndexRebra(NameUzel1, NameUzel2);
    //������� � ������� ����� ������ ������ ����� �� -1
    this->RebroList[indexRebroDelete][0] =
        this->RebroList[indexRebroDelete][1] =
        this->RebroList[indexRebroDelete][2] = -1;
    //������� �� -1 � �������
    for (int i = 0; i < this->maxSize; i++)
    {
        for (int j = 0; j < this->maxSize; j++)
        {
            if (matrixSmezhosty[i][j] == indexRebroDelete)
            {
                this->matrixSmezhosty[i][j] = -1;
            }
        }
    }
}

int HeightUzel = 75, WeightUzel = 75;
//������� �� String^ � string
void MarshalString(String^ s, std::string& os) {
    using namespace Runtime::InteropServices;
    const char* chars =
        (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
    os = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));
}

ref class MyPensil
{
public:
    MyPensil()
    {
        MyPen = gcnew System::Drawing::Pen(System::Drawing::Color::Orange);
        MyPen->Width = 3;
        MyPen->LineJoin = System::Drawing::Drawing2D::LineJoin::Miter;
    }
    System::Drawing::Pen^ MyPen;
};

Graph<int> graph(21, 9);//������� ���� � ������������ ����������� ����� - 21 � ����������� ����� 9
System::Void Komivoyazhor::MainForm::MainForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    this->Size = System::Drawing::Size(SystemInformation::VirtualScreen.Width, SystemInformation::VirtualScreen.Height);
}
//������� ������� � ����� �������, ���� � ��� ������������� �����-���������//
System::Void Komivoyazhor::MainForm::tb_vecRebra_Enter(System::Object^ sender, System::EventArgs^ e)
{
    if (tb_vecRebra->Text == "������� ��� �����")
    {
        tb_vecRebra->Text = "";
        tb_vecRebra->ForeColor = Color::Black;
    }
}
System::Void Komivoyazhor::MainForm::tb_vecRebra_Leave(System::Object^ sender, System::EventArgs^ e)
{
    if (tb_vecRebra->Text == "")
    {
        tb_vecRebra->ForeColor = Color::DarkGray;
        tb_vecRebra->Text = "������� ��� �����";
    }
}
System::Void Komivoyazhor::MainForm::tb_nameUzla_Leave(System::Object^ sender, System::EventArgs^ e)
{
    if (tb_nameUzla->Text == "")
    {
        tb_nameUzla->ForeColor = Color::DarkGray;
        tb_nameUzla->Text = "������� �������� ����";
    }
}
System::Void Komivoyazhor::MainForm::tb_nameUzla_Enter(System::Object^ sender, System::EventArgs^ e)
{
    if (tb_nameUzla->Text == "������� �������� ����")
    {
        tb_nameUzla->Text = "";
        tb_nameUzla->ForeColor = Color::Black;
    }
}
System::Void Komivoyazhor::MainForm::btn_output_resultKomi_Click(System::Object^ sender, System::EventArgs^ e)
{
    Komivoyazhor();
}
int kolSymbKod = 2;
System::Void Komivoyazhor::MainForm::btn_input_Click(System::Object^ sender, System::EventArgs^ e)
{
    enum Kods
    {
        DFS_ind = 1, BFS_ind, Dijkstra_ind
    };
    if (TB_input->Text == "")
    {
        return;
    }
    else
    {
        std::string text_in_console;
        MarshalString(TB_input->Text, text_in_console);
        int kod = text_in_console[0] - '0';
        std::string zapros;
        for (int i = 0; i < text_in_console.length(); i++)
        {
            if (i > kolSymbKod) zapros += text_in_console[i];
        }

        switch (kod)
        {
        case 1: DFS(atoi(zapros.c_str())); break;
        case 2: BFS(atoi(zapros.c_str())); break;
        case 3: Dijkstra(atoi(zapros.c_str())); break;
        case 4: graph.Print(textBox_console);
        default: break;
        }
    }
}
///

bool load = true; //��� ��������� ������ ��������� ������
//�������� �����
System::Void Komivoyazhor::MainForm::panel_uzlov_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
    if (load == true)
    {
        load = false;

        AddUzel(1, 500, 700);
        AddUzel(2, 700, 220);
        AddUzel(3, 240, 330);
        AddUzel(4, 210, 590);
        AddUzel(5, 350, 100);
        AddUzel(6, 820, 550);
        AddRebro(4, 1, 5);//��� ����� 4 � 1
        AddRebro(4, 3, 3);//��� ����� 4 � 3
        AddRebro(3, 5, 21);//��� ����� 3 � 5
        AddRebro(3, 2, 16);//��� ����� 3 � 2
        AddRebro(3, 1, 18);//��� ����� 3 � 1
        AddRebro(2, 1, 12);//��� ����� 2 � 1
        AddRebro(6, 1, 34);//��� ����� 6 � 1
        AddRebro(2, 6, 45);//��� ����� 2 � 6
        AddRebro(5, 2, 53);//��� ����� 5 � 2
        DFS(1);
        BFS(1);
        Dijkstra(3);
        graph.Print(textBox_console);
        Komivoyazhor();
    }
}
System::Void Komivoyazhor::MainForm::Komivoyazhor()
{
    label_resultatKomiLendth->Text = "";
    label_resultatKomiWay->Text = "";

    std::vector<int> way = graph.Komivoyazhor(graph.matrixSmezhostyWeight());
    label_resultatKomiLendth->Text = "�����: " + way.back();
    way.pop_back();
    label_resultatKomiWay->Text = "����: " + (way[0] + 1);
    for (int i = 1; i < way.size(); i++)
    {
        label_resultatKomiWay->Text += " -> " + (way[i] + 1);
    }

}
System::Void Komivoyazhor::MainForm::DFS(int startUzel)
{
    textBox_console->Text += "�������� ������ � ������� �� ������� " + startUzel + "\r\n";
    bool* visitedUzels = new bool[21]{ false };
    graph.DFS(startUzel, visitedUzels, textBox_console);
    textBox_console->Text += "\r\n";
}
System::Void Komivoyazhor::MainForm::BFS(int startUzel)
{
    textBox_console->Text += "�������� ������ � ������� �� ������� " + startUzel + "\r\n";
    bool* visitedUzels2 = new bool[21]{ false };
    graph.BFS(startUzel, visitedUzels2, textBox_console);
    textBox_console->Text += "\r\n";
}
System::Void Komivoyazhor::MainForm::Dijkstra(int startUzel)
{
    textBox_console->Text += "�������� �������� �� ������� " + startUzel + "\r\n";
    graph.Dijkstra(startUzel, textBox_console);
    textBox_console->Text += "\r\n";
}
//���������� �����
System::Void Komivoyazhor::MainForm::AddUzel(int nameUzel, int x, int y)
{
    graph.InsertUzel(nameUzel, x, y, textBox_console);
    //���������� ���� �� �������� ����� � � �
    Graphics^ g;
    g = panel_uzlov->CreateGraphics();
    g->FillEllipse(Brushes::Orange, x, y, HeightUzel, WeightUzel);

    //��������� ������ ����
    System::Windows::Forms::Button^ bt = gcnew System::Windows::Forms::Button();
    bt->Location = System::Drawing::Point(x + WeightUzel / 4, y + HeightUzel / 4);
    bt->Size = System::Drawing::Size(WeightUzel - WeightUzel / 2, HeightUzel - HeightUzel / 2);
    bt->AutoSize = true;
    bt->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    bt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    bt->Text = nameUzel.ToString();
    tb_nameUzla->ForeColor = Color::DarkGray; Komivoyazhor::MainForm::tb_nameUzla->Text = "������� �������� ����";
    bt->BackColor = System::Drawing::Color::Orange;
    bt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    bt->FlatAppearance->BorderSize = 0;
    bt->Cursor = System::Windows::Forms::Cursors::Hand;
    bt->Name = "btnGraf";
    bt->Click += gcnew System::EventHandler(this, &MainForm::btnUzel_MouseClick);
    panel_uzlov->Controls->Add(bt);
    btn_output_resultKomi->Focus();
}
System::Void Komivoyazhor::MainForm::AddRebro(int NameUzel1, int NameUzel2, int vecRebra)
{
    //������� �������� �����
    double polovinaX = WeightUzel / 2, polovinaY = HeightUzel / 2;
    double X1 = graph.UzelList[graph.GetUzelPos(NameUzel1)][1] + polovinaX,
        Y1 = graph.UzelList[graph.GetUzelPos(NameUzel1)][2] + polovinaY,
        X2 = graph.UzelList[graph.GetUzelPos(NameUzel2)][1] + polovinaX,
        Y2 = graph.UzelList[graph.GetUzelPos(NameUzel2)][2] + polovinaY;
    //������� ������ ����� ����������
    double lineLength;
    double MAX_LINE_LENGTH;
    lineLength = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
    MAX_LINE_LENGTH = lineLength - WeightUzel / 2;
    X2 = X1 + (X2 - X1) / lineLength * MAX_LINE_LENGTH;
    Y2 = Y1 + (Y2 - Y1) / lineLength * MAX_LINE_LENGTH;

    lineLength = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
    MAX_LINE_LENGTH = lineLength - WeightUzel / 2;
    X1 = X2 - (X2 - X1) / lineLength * MAX_LINE_LENGTH;
    Y1 = Y2 - (Y2 - Y1) / lineLength * MAX_LINE_LENGTH;

    //��������� �����
    Graphics^ g;
    MyPensil myPensil;
    g = panel_uzlov->CreateGraphics();
    g->DrawLine(myPensil.MyPen, (int)X1, (int)Y1, (int)X2, (int)Y2);

    //������ ��������� �����.������ �����
    int X = X1 + (X2 - X1) / 2,
        Y = Y1 + (Y2 - Y1) / 2;

    //������ ������ �� �����
    System::Windows::Forms::Button^ bt = gcnew System::Windows::Forms::Button();
    bt->Location = System::Drawing::Point(X, Y);
    bt->Size = System::Drawing::Size(35, 20);
    bt->AutoSize = true;
    bt->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    bt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    bt->Text = vecRebra.ToString();
    tb_vecRebra->ForeColor = Color::DarkGray; Komivoyazhor::MainForm::tb_vecRebra->Text = "������� ��� �����";
    bt->BackColor = System::Drawing::Color::Transparent;
    bt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    bt->FlatAppearance->BorderSize = 0;
    bt->Cursor = System::Windows::Forms::Cursors::Hand;
    bt->Name = "btnRebro";
    bt->Click += gcnew System::EventHandler(this, &MainForm::btnRebro_MouseClick);
    panel_uzlov->Controls->Add(bt);

    graph.lnsertRebro(NameUzel1, NameUzel2, vecRebra, X, Y, textBox_console);
}
//��������� ��� ����� �� ������ ����� ��� �������� ����
System::Void Komivoyazhor::MainForm::panel_uzlov_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    if (rb_addUzel->Checked == true)
    {
        if (tb_nameUzla->Text != "������� �������� ����")
        {
            for (int i = 0; i < graph.UzelList.size(); i++)
            {
                if (graph.UzelList[i][0] == Convert::ToInt32(tb_nameUzla->Text))
                {
                    MessageBox::Show("���� � ����� ��������� ��� ����������!", "��������������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                    tb_nameUzla->ForeColor = Color::DarkGray; Komivoyazhor::MainForm::tb_nameUzla->Text = "������� �������� ����";
                    btn_output_resultKomi->Focus();
                    break;
                }
                else if (i == (graph.UzelList.size() - 1))
                {
                    AddUzel(Convert::ToInt32(tb_nameUzla->Text), (e->Location.X) - HeightUzel / 2, (e->Location.Y) - WeightUzel / 2);
                    break;
                }
                    
            }
        }
        else MessageBox::Show("������� �������� ����!", "��������������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }
}
int countClic = 0;
//����� ���������� ������ �� ������
System::Void Komivoyazhor::MainForm::rb_addRebro_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    countClic = 0;
}

std::string NameUzel1, NameUzel2;
//��� ������� ����� �� ����
System::Void Komivoyazhor::MainForm::btnUzel_MouseClick(System::Object^ sender, System::EventArgs^ e)
{
    //���� ������ ����� ������ "�������� �����"
    if (rb_addRebro->Checked == true)
    {
        //�������� ������ (�� ������� ������) "������" ��� ����������� � ���
        Button^ btnUzel = (Button^)sender;

        ++countClic;
        if (countClic == 1)
        {
            //������� ������ �� ������ � ��������� ������ � ���������� NameUzel1
            MarshalString(btnUzel->Text, NameUzel1);
        }
        else
        {
            countClic = 0;
            MarshalString(btnUzel->Text, NameUzel2);

            if (NameUzel1 != NameUzel2)
            {
                if (tb_vecRebra->Text != "������� ��� �����")
                {
                    AddRebro(atoi(NameUzel1.c_str()), atoi(NameUzel2.c_str()), Convert::ToInt32(tb_vecRebra->Text));
                }
                else MessageBox::Show("������� ��� �����!", "��������������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            }
        }
    }
    //���� ������ ����� ������ "������� ����"
    if (rb_deleteUzel->Checked == true)
    {
        Button^ dtnUzelDelete = (Button^)sender;

        Controls->Remove(dtnUzelDelete);
        dtnUzelDelete->Visible = false;

        for (int i = 0; i < graph.UzelList.size(); i++)//������� ����������� �����
        {
            //���� ��� ������������ ���� ����� ����� ������, �� ������� ������
            if (dtnUzelDelete->Text == graph.UzelList[i][0].ToString())
            {
                //���� ������ ����� ����, ������� � ������� ��������� �� ������� ������� �����
                for (int j = 0; j < graph.UzelList.size(); j++)
                {
                    if (graph.matrixSmezhosty[i][j] != -1)//���� ���� ����� ���� � ���� ������
                    {
                        for each (Control^ dtnRebroDelete in panel_uzlov->Controls) //��� ���� ��������� ������
                        {
                            if (dtnRebroDelete->Name == "btnRebro" && 
                                dtnRebroDelete->Location.X == graph.RebroList[graph.matrixSmezhosty[i][j]][1] && 
                                dtnRebroDelete->Location.Y == graph.RebroList[graph.matrixSmezhosty[i][j]][2])//���� ���� ������� - �����
                            {
                                Controls->Remove(dtnRebroDelete);
                                dtnRebroDelete->Visible = false;
                            }
                        }
                        DeleteRebro(graph.UzelList[i][0], graph.UzelList[j][0]);//������� ������ � ����� � ���������� ���� ����� �����
                    }
                }
                break;
            }
        }
        DeleteUzel(Convert::ToInt32(dtnUzelDelete->Text));//�������� ����� ���������� � ������ � ���
    }
}
System::Void Komivoyazhor::MainForm::DeleteRebro(int NameUzel1, int NameUzel2)
{
    graph.DeleteRebro(NameUzel1, NameUzel2);
    Graphics^ g;
    MyPensil myPensil;
    g = panel_uzlov->CreateGraphics();
    //������� �������� �����
    double polovinaX = WeightUzel / 2, polovinaY = HeightUzel / 2;
    double X1 = graph.UzelList[graph.GetUzelPos(NameUzel1)][1] + polovinaX,
        Y1 = graph.UzelList[graph.GetUzelPos(NameUzel1)][2] + polovinaY,
        X2 = graph.UzelList[graph.GetUzelPos(NameUzel2)][1] + polovinaX,
        Y2 = graph.UzelList[graph.GetUzelPos(NameUzel2)][2] + polovinaY;
    //������� ������ ����� ����������
    double lineLength;
    double MAX_LINE_LENGTH;
    lineLength = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
    MAX_LINE_LENGTH = lineLength - WeightUzel / 2;
    X2 = X1 + (X2 - X1) / lineLength * MAX_LINE_LENGTH;
    Y2 = Y1 + (Y2 - Y1) / lineLength * MAX_LINE_LENGTH;

    lineLength = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
    MAX_LINE_LENGTH = lineLength - WeightUzel / 2;
    X1 = X2 - (X2 - X1) / lineLength * MAX_LINE_LENGTH;
    Y1 = Y2 - (Y2 - Y1) / lineLength * MAX_LINE_LENGTH;

    myPensil.MyPen->Color = System::Drawing::Color::White;
    
    g->DrawLine(myPensil.MyPen, (int)X1, (int)Y1, (int)X2, (int)Y2);

}

System::Void Komivoyazhor::MainForm::DeleteUzel(int NameUzel)
{
    //����������� ����
    Graphics^ g;
    g = panel_uzlov->CreateGraphics();
    int x, y;
    for (int i = 0; i < graph.UzelList.size(); i++)
    {
        if (graph.UzelList[i][0] == NameUzel)
        {
            x = graph.UzelList[i][1];
            y = graph.UzelList[i][2];
            break;
        }
    }
    g->FillEllipse(Brushes::White, x, y, HeightUzel, WeightUzel);
    graph.DeleteUzel(NameUzel);
}
System::Void Komivoyazhor::MainForm::btnRebro_MouseClick(System::Object^ sender, System::EventArgs^ e)
{
    //���� �������� ����� ������ �� �������� �����
    if (rb_deleteRebro->Checked == true)
    {
        Button^ btnRebroDelete = (Button^)sender;
        int indexUzel1, indexUzel2;

        //������� ������� ������
        Controls->Remove(btnRebroDelete);
        btnRebroDelete->Visible = false;

        //���� �� ���������� ������� ���������� ����� � ����������� � ��� �����
        for (int i = 0; i < graph.RebroList.size(); i++)
        {
            if (graph.RebroList[i][1] == btnRebroDelete->Location.X && graph.RebroList[i][2] == btnRebroDelete->Location.Y)
            {
                auto p = graph.GetIncidentRebry(i);//�������� ������� �����, ������� ��������� �����
                DeleteRebro(graph.UzelList[p.first][0], graph.UzelList[p.second][0]);
                break;
            }
        }
    }
    if (btn_RedactVesRebro->Checked == true)
    {
        Button^ btnRebroRedact = (Button^)sender;
        if (tb_vecRebra->Text != "������� ��� �����")
        {
            graph.RedactVesRebro(btnRebroRedact->Location.X, btnRebroRedact->Location.Y, Convert::ToInt32(tb_vecRebra->Text));
            btnRebroRedact->Text = tb_vecRebra->Text;
            tb_vecRebra->ForeColor = Color::DarkGray; Komivoyazhor::MainForm::tb_vecRebra->Text = "������� ��� �����";
        }
        else MessageBox::Show("������� ��� �����!", "��������������", MessageBoxButtons::OK, MessageBoxIcon::Warning);

    }
}