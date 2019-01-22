void Signal_mjetl2_mean()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 16:09:14 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(445.6571,62.57732,5728.514,114.1237);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.08);
   c->SetBottomMargin(0.144);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1109[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1109[12] = {
   80.25518,
   79.2089,
   79.47665,
   79.01744,
   79.1963,
   80.2127,
   80.28544,
   80.68879,
   79.90798,
   79.42958,
   79.54067,
   79.57859};
   Double_t _fex1109[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1109[12] = {
   0.3781305,
   0.2843479,
   0.2434283,
   0.2424592,
   0.232753,
   0.2205468,
   0.2068415,
   0.2029195,
   0.1867169,
   0.2096546,
   0.216356,
   0.2341399};
   TGraphErrors *gre = new TGraphErrors(12,_fx1109,_fy1109,_fex1109,_fey1109);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1109 = new TH1F("Graph_Graph1109","",100,770,5930);
   Graph_Graph1109->SetMinimum(70);
   Graph_Graph1109->SetMaximum(110);
   Graph_Graph1109->SetDirectory(0);
   Graph_Graph1109->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1109->SetLineColor(ci);
   Graph_Graph1109->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph1109->GetXaxis()->SetRange(7,92);
   Graph_Graph1109->GetXaxis()->SetNdivisions(209);
   Graph_Graph1109->GetXaxis()->SetLabelFont(42);
   Graph_Graph1109->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1109->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1109->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1109->GetXaxis()->SetTitleFont(42);
   Graph_Graph1109->GetYaxis()->SetTitle("mean (GeV)");
   Graph_Graph1109->GetYaxis()->SetNdivisions(504);
   Graph_Graph1109->GetYaxis()->SetLabelFont(42);
   Graph_Graph1109->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1109->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1109->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1109->GetYaxis()->SetTitleFont(42);
   Graph_Graph1109->GetZaxis()->SetLabelFont(42);
   Graph_Graph1109->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1109->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1109);
   
   
   TF1 *pol41110 = new TF1("pol4","pol4",1200,5500);
   pol41110->SetFillColor(19);
   pol41110->SetFillStyle(0);
   pol41110->SetLineColor(2);
   pol41110->SetLineWidth(2);
   pol41110->SetChisquare(12.15245);
   pol41110->SetNDF(7);
   pol41110->GetXaxis()->SetLabelFont(42);
   pol41110->GetXaxis()->SetLabelOffset(0.007);
   pol41110->GetXaxis()->SetLabelSize(0.05);
   pol41110->GetXaxis()->SetTitleSize(0.06);
   pol41110->GetXaxis()->SetTitleOffset(0.9);
   pol41110->GetXaxis()->SetTitleFont(42);
   pol41110->GetYaxis()->SetLabelFont(42);
   pol41110->GetYaxis()->SetLabelOffset(0.007);
   pol41110->GetYaxis()->SetLabelSize(0.05);
   pol41110->GetYaxis()->SetTitleSize(0.06);
   pol41110->GetYaxis()->SetTitleOffset(1.25);
   pol41110->GetYaxis()->SetTitleFont(42);
   pol41110->SetParameter(0,91.87077);
   pol41110->SetParError(0,3.129156);
   pol41110->SetParLimits(0,0,0);
   pol41110->SetParameter(1,-0.01973358);
   pol41110->SetParError(1,0.004474981);
   pol41110->SetParLimits(1,0,0);
   pol41110->SetParameter(2,1.06379e-05);
   pol41110->SetParError(2,2.227007e-06);
   pol41110->SetParLimits(2,0,0);
   pol41110->SetParameter(3,-2.288189e-09);
   pol41110->SetParError(3,4.6182e-10);
   pol41110->SetParLimits(3,0,0);
   pol41110->SetParameter(4,1.69704e-13);
   pol41110->SetParError(4,3.397337e-14);
   pol41110->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41110);
   gre->Draw("ap");
   
   Double_t _fx1111[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1111[12] = {
   79.52931,
   79.25575,
   78.99255,
   78.42781,
   78.82205,
   79.31446,
   79.33302,
   79.38101,
   78.87819,
   78.93847,
   78.24624,
   78.48898};
   Double_t _fex1111[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1111[12] = {
   0.1668378,
   0.1583053,
   0.1444721,
   0.148075,
   0.1491728,
   0.1425847,
   0.1574706,
   0.1678584,
   0.1893711,
   0.168159,
   0.1710622,
   0.1773353};
   gre = new TGraphErrors(12,_fx1111,_fy1111,_fex1111,_fey1111);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1111 = new TH1F("Graph_Graph1111","",100,770,5930);
   Graph_Graph1111->SetMinimum(77.91308);
   Graph_Graph1111->SetMaximum(79.85824);
   Graph_Graph1111->SetDirectory(0);
   Graph_Graph1111->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1111->SetLineColor(ci);
   Graph_Graph1111->GetXaxis()->SetLabelFont(42);
   Graph_Graph1111->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1111->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1111->GetXaxis()->SetTitleFont(42);
   Graph_Graph1111->GetYaxis()->SetLabelFont(42);
   Graph_Graph1111->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1111->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1111->GetYaxis()->SetTitleFont(42);
   Graph_Graph1111->GetZaxis()->SetLabelFont(42);
   Graph_Graph1111->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1111->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1111);
   
   
   TF1 *pol41112 = new TF1("pol4","pol4",1200,5500);
   pol41112->SetFillColor(19);
   pol41112->SetFillStyle(0);
   pol41112->SetLineColor(2);
   pol41112->SetLineWidth(2);
   pol41112->SetChisquare(14.62307);
   pol41112->SetNDF(7);
   pol41112->GetXaxis()->SetLabelFont(42);
   pol41112->GetXaxis()->SetLabelOffset(0.007);
   pol41112->GetXaxis()->SetLabelSize(0.05);
   pol41112->GetXaxis()->SetTitleSize(0.06);
   pol41112->GetXaxis()->SetTitleOffset(0.9);
   pol41112->GetXaxis()->SetTitleFont(42);
   pol41112->GetYaxis()->SetLabelFont(42);
   pol41112->GetYaxis()->SetLabelOffset(0.007);
   pol41112->GetYaxis()->SetLabelSize(0.05);
   pol41112->GetYaxis()->SetTitleSize(0.06);
   pol41112->GetYaxis()->SetTitleOffset(1.25);
   pol41112->GetYaxis()->SetTitleFont(42);
   pol41112->SetParameter(0,89.42593);
   pol41112->SetParError(0,1.848415);
   pol41112->SetParLimits(0,0,0);
   pol41112->SetParameter(1,-0.01568768);
   pol41112->SetParError(1,0.002761982);
   pol41112->SetParLimits(1,0,0);
   pol41112->SetParameter(2,8.074691e-06);
   pol41112->SetParError(2,1.426951e-06);
   pol41112->SetParLimits(2,0,0);
   pol41112->SetParameter(3,-1.687586e-09);
   pol41112->SetParError(3,3.045536e-10);
   pol41112->SetParLimits(3,0,0);
   pol41112->SetParameter(4,1.222473e-13);
   pol41112->SetParError(4,2.28984e-14);
   pol41112->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41112);
   gre->Draw("p");
   
   Double_t _fx1113[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1113[12] = {
   80.25518,
   79.2089,
   79.47665,
   79.01744,
   79.1963,
   80.2127,
   80.28544,
   80.68879,
   79.90798,
   79.42958,
   79.54067,
   79.57859};
   Double_t _fex1113[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1113[12] = {
   0.3781305,
   0.2843479,
   0.2434283,
   0.2424592,
   0.232753,
   0.2205468,
   0.2068415,
   0.2029195,
   0.1867169,
   0.2096546,
   0.216356,
   0.2341399};
   gre = new TGraphErrors(12,_fx1113,_fy1113,_fex1113,_fey1113);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph11091113 = new TH1F("Graph_Graph_Graph11091113","",100,770,5930);
   Graph_Graph_Graph11091113->SetMinimum(70);
   Graph_Graph_Graph11091113->SetMaximum(110);
   Graph_Graph_Graph11091113->SetDirectory(0);
   Graph_Graph_Graph11091113->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11091113->SetLineColor(ci);
   Graph_Graph_Graph11091113->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph_Graph11091113->GetXaxis()->SetRange(7,92);
   Graph_Graph_Graph11091113->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph11091113->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11091113->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11091113->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11091113->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph11091113->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11091113->GetYaxis()->SetTitle("mean (GeV)");
   Graph_Graph_Graph11091113->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph11091113->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11091113->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11091113->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11091113->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph11091113->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11091113->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11091113->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11091113->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11091113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph11091113);
   
   
   TF1 *pol41114 = new TF1("pol4","pol4",1200,5500);
   pol41114->SetFillColor(19);
   pol41114->SetFillStyle(0);
   pol41114->SetLineColor(2);
   pol41114->SetLineWidth(2);
   pol41114->SetChisquare(12.15245);
   pol41114->SetNDF(7);
   pol41114->GetXaxis()->SetLabelFont(42);
   pol41114->GetXaxis()->SetLabelOffset(0.007);
   pol41114->GetXaxis()->SetLabelSize(0.05);
   pol41114->GetXaxis()->SetTitleSize(0.06);
   pol41114->GetXaxis()->SetTitleOffset(0.9);
   pol41114->GetXaxis()->SetTitleFont(42);
   pol41114->GetYaxis()->SetLabelFont(42);
   pol41114->GetYaxis()->SetLabelOffset(0.007);
   pol41114->GetYaxis()->SetLabelSize(0.05);
   pol41114->GetYaxis()->SetTitleSize(0.06);
   pol41114->GetYaxis()->SetTitleOffset(1.25);
   pol41114->GetYaxis()->SetTitleFont(42);
   pol41114->SetParameter(0,91.87077);
   pol41114->SetParError(0,3.129156);
   pol41114->SetParLimits(0,0,0);
   pol41114->SetParameter(1,-0.01973358);
   pol41114->SetParError(1,0.004474981);
   pol41114->SetParLimits(1,0,0);
   pol41114->SetParameter(2,1.06379e-05);
   pol41114->SetParError(2,2.227007e-06);
   pol41114->SetParLimits(2,0,0);
   pol41114->SetParameter(3,-2.288189e-09);
   pol41114->SetParError(3,4.6182e-10);
   pol41114->SetParLimits(3,0,0);
   pol41114->SetParameter(4,1.69704e-13);
   pol41114->SetParError(4,3.397337e-14);
   pol41114->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41114);
   gre->Draw("p");
   
   TF1 *pol41115 = new TF1("pol4","pol4",0,13000);
   pol41115->SetBit(TF1::kNotDraw);
   pol41115->SetFillColor(19);
   pol41115->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol41115->SetMarkerColor(ci);
   pol41115->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol41115->SetLineColor(ci);
   pol41115->SetLineWidth(3);
   pol41115->SetChisquare(12.15245);
   pol41115->SetNDF(7);
   pol41115->GetXaxis()->SetLabelFont(42);
   pol41115->GetXaxis()->SetLabelOffset(0.007);
   pol41115->GetXaxis()->SetLabelSize(0.05);
   pol41115->GetXaxis()->SetTitleSize(0.06);
   pol41115->GetXaxis()->SetTitleOffset(0.9);
   pol41115->GetXaxis()->SetTitleFont(42);
   pol41115->GetYaxis()->SetLabelFont(42);
   pol41115->GetYaxis()->SetLabelOffset(0.007);
   pol41115->GetYaxis()->SetLabelSize(0.05);
   pol41115->GetYaxis()->SetTitleSize(0.06);
   pol41115->GetYaxis()->SetTitleOffset(1.25);
   pol41115->GetYaxis()->SetTitleFont(42);
   pol41115->SetParameter(0,91.87077);
   pol41115->SetParError(0,3.129156);
   pol41115->SetParLimits(0,0,0);
   pol41115->SetParameter(1,-0.01973358);
   pol41115->SetParError(1,0.004474981);
   pol41115->SetParLimits(1,0,0);
   pol41115->SetParameter(2,1.06379e-05);
   pol41115->SetParError(2,2.227007e-06);
   pol41115->SetParLimits(2,0,0);
   pol41115->SetParameter(3,-2.288189e-09);
   pol41115->SetParError(3,4.6182e-10);
   pol41115->SetParLimits(3,0,0);
   pol41115->SetParameter(4,1.69704e-13);
   pol41115->SetParError(4,3.397337e-14);
   pol41115->SetParLimits(4,0,0);
   pol41115->Draw("Csame");
   
   TF1 *pol41116 = new TF1("pol4","pol4",0,13000);
   pol41116->SetBit(TF1::kNotDraw);
   pol41116->SetFillColor(19);
   pol41116->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol41116->SetMarkerColor(ci);
   pol41116->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   pol41116->SetLineColor(ci);
   pol41116->SetLineWidth(3);
   pol41116->SetLineStyle(9);
   pol41116->SetChisquare(14.62307);
   pol41116->SetNDF(7);
   pol41116->GetXaxis()->SetLabelFont(42);
   pol41116->GetXaxis()->SetLabelOffset(0.007);
   pol41116->GetXaxis()->SetLabelSize(0.05);
   pol41116->GetXaxis()->SetTitleSize(0.06);
   pol41116->GetXaxis()->SetTitleOffset(0.9);
   pol41116->GetXaxis()->SetTitleFont(42);
   pol41116->GetYaxis()->SetLabelFont(42);
   pol41116->GetYaxis()->SetLabelOffset(0.007);
   pol41116->GetYaxis()->SetLabelSize(0.05);
   pol41116->GetYaxis()->SetTitleSize(0.06);
   pol41116->GetYaxis()->SetTitleOffset(1.25);
   pol41116->GetYaxis()->SetTitleFont(42);
   pol41116->SetParameter(0,89.42593);
   pol41116->SetParError(0,1.848415);
   pol41116->SetParLimits(0,0,0);
   pol41116->SetParameter(1,-0.01568768);
   pol41116->SetParError(1,0.002761982);
   pol41116->SetParLimits(1,0,0);
   pol41116->SetParameter(2,8.074691e-06);
   pol41116->SetParError(2,1.426951e-06);
   pol41116->SetParLimits(2,0,0);
   pol41116->SetParameter(3,-1.687586e-09);
   pol41116->SetParError(3,3.045536e-10);
   pol41116->SetParLimits(3,0,0);
   pol41116->SetParameter(4,1.222473e-13);
   pol41116->SetParError(4,2.28984e-14);
   pol41116->SetParLimits(4,0,0);
   pol41116->Draw("Csame");
   
   Double_t _fx1115[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1115[12] = {
   80.37898,
   80.24788,
   79.56317,
   79.37255,
   79.46503,
   79.7529,
   80.06163,
   80.18257,
   80.19491,
   79.8612,
   79.57033,
   79.49288};
   Double_t _fex1115[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1115[12] = {
   0.1399346,
   0.1312712,
   0.1255419,
   0.1293865,
   0.1242208,
   0.1264413,
   0.132786,
   0.1332666,
   0.1423259,
   0.1703302,
   0.1825099,
   0.185953};
   gre = new TGraphErrors(12,_fx1115,_fy1115,_fex1115,_fey1115);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1115 = new TH1F("Graph_Graph1115","",100,770,5930);
   Graph_Graph1115->SetMinimum(79.11559);
   Graph_Graph1115->SetMaximum(80.64649);
   Graph_Graph1115->SetDirectory(0);
   Graph_Graph1115->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1115->SetLineColor(ci);
   Graph_Graph1115->GetXaxis()->SetLabelFont(42);
   Graph_Graph1115->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1115->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1115->GetXaxis()->SetTitleFont(42);
   Graph_Graph1115->GetYaxis()->SetLabelFont(42);
   Graph_Graph1115->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1115->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1115->GetYaxis()->SetTitleFont(42);
   Graph_Graph1115->GetZaxis()->SetLabelFont(42);
   Graph_Graph1115->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1115->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1115);
   
   
   TF1 *pol41116 = new TF1("pol4","pol4",1200,5500);
   pol41116->SetFillColor(19);
   pol41116->SetFillStyle(0);
   pol41116->SetLineColor(2);
   pol41116->SetLineWidth(2);
   pol41116->SetChisquare(7.076321);
   pol41116->SetNDF(7);
   pol41116->GetXaxis()->SetLabelFont(42);
   pol41116->GetXaxis()->SetLabelOffset(0.007);
   pol41116->GetXaxis()->SetLabelSize(0.05);
   pol41116->GetXaxis()->SetTitleSize(0.06);
   pol41116->GetXaxis()->SetTitleOffset(0.9);
   pol41116->GetXaxis()->SetTitleFont(42);
   pol41116->GetYaxis()->SetLabelFont(42);
   pol41116->GetYaxis()->SetLabelOffset(0.007);
   pol41116->GetYaxis()->SetLabelSize(0.05);
   pol41116->GetYaxis()->SetTitleSize(0.06);
   pol41116->GetYaxis()->SetTitleOffset(1.25);
   pol41116->GetYaxis()->SetTitleFont(42);
   pol41116->SetParameter(0,90.80568);
   pol41116->SetParError(0,1.61012);
   pol41116->SetParLimits(0,0,0);
   pol41116->SetParameter(1,-0.01579002);
   pol41116->SetParError(1,0.002431292);
   pol41116->SetParLimits(1,0,0);
   pol41116->SetParameter(2,7.665528e-06);
   pol41116->SetParError(2,1.271639e-06);
   pol41116->SetParLimits(2,0,0);
   pol41116->SetParameter(3,-1.511429e-09);
   pol41116->SetParError(3,2.751124e-10);
   pol41116->SetParLimits(3,0,0);
   pol41116->SetParameter(4,1.039568e-13);
   pol41116->SetParError(4,2.095396e-14);
   pol41116->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41116);
   gre->Draw("p");
   
   Double_t _fx1117[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1117[12] = {
   81.00204,
   80.57332,
   80.27822,
   80.45412,
   81.02176,
   81.52298,
   81.35821,
   81.76601,
   81.34875,
   80.76288,
   80.93938,
   80.66212};
   Double_t _fex1117[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1117[12] = {
   0.3304526,
   0.3333202,
   0.2873714,
   0.2616721,
   0.2375846,
   0.216329,
   0.2346473,
   0.1913147,
   0.1941815,
   0.1893924,
   0.187789,
   0.2098824};
   gre = new TGraphErrors(12,_fx1117,_fy1117,_fex1117,_fey1117);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1117 = new TH1F("Graph_Graph1117","",100,770,5930);
   Graph_Graph1117->SetMinimum(79.7942);
   Graph_Graph1117->SetMaximum(82.15397);
   Graph_Graph1117->SetDirectory(0);
   Graph_Graph1117->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1117->SetLineColor(ci);
   Graph_Graph1117->GetXaxis()->SetLabelFont(42);
   Graph_Graph1117->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1117->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1117->GetXaxis()->SetTitleFont(42);
   Graph_Graph1117->GetYaxis()->SetLabelFont(42);
   Graph_Graph1117->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1117->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1117->GetYaxis()->SetTitleFont(42);
   Graph_Graph1117->GetZaxis()->SetLabelFont(42);
   Graph_Graph1117->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1117->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1117);
   
   
   TF1 *pol41118 = new TF1("pol4","pol4",1200,5500);
   pol41118->SetFillColor(19);
   pol41118->SetFillStyle(0);
   pol41118->SetLineColor(2);
   pol41118->SetLineWidth(2);
   pol41118->SetChisquare(10.50553);
   pol41118->SetNDF(7);
   pol41118->GetXaxis()->SetLabelFont(42);
   pol41118->GetXaxis()->SetLabelOffset(0.007);
   pol41118->GetXaxis()->SetLabelSize(0.05);
   pol41118->GetXaxis()->SetTitleSize(0.06);
   pol41118->GetXaxis()->SetTitleOffset(0.9);
   pol41118->GetXaxis()->SetTitleFont(42);
   pol41118->GetYaxis()->SetLabelFont(42);
   pol41118->GetYaxis()->SetLabelOffset(0.007);
   pol41118->GetYaxis()->SetLabelSize(0.05);
   pol41118->GetYaxis()->SetTitleSize(0.06);
   pol41118->GetYaxis()->SetTitleOffset(1.25);
   pol41118->GetYaxis()->SetTitleFont(42);
   pol41118->SetParameter(0,85.85041);
   pol41118->SetParError(0,2.952638);
   pol41118->SetParLimits(0,0,0);
   pol41118->SetParameter(1,-0.00913321);
   pol41118->SetParError(1,0.004236869);
   pol41118->SetParLimits(1,0,0);
   pol41118->SetParameter(2,5.340847e-06);
   pol41118->SetParError(2,2.109766e-06);
   pol41118->SetParLimits(2,0,0);
   pol41118->SetParameter(3,-1.191798e-09);
   pol41118->SetParError(3,4.368836e-10);
   pol41118->SetParLimits(3,0,0);
   pol41118->SetParameter(4,8.948308e-14);
   pol41118->SetParError(4,3.20629e-14);
   pol41118->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41118);
   gre->Draw("p");
   
   TF1 *pol41119 = new TF1("pol4","pol4",0,13000);
   pol41119->SetBit(TF1::kNotDraw);
   pol41119->SetFillColor(19);
   pol41119->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol41119->SetMarkerColor(ci);
   pol41119->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol41119->SetLineColor(ci);
   pol41119->SetLineWidth(3);
   pol41119->SetChisquare(10.50553);
   pol41119->SetNDF(7);
   pol41119->GetXaxis()->SetLabelFont(42);
   pol41119->GetXaxis()->SetLabelOffset(0.007);
   pol41119->GetXaxis()->SetLabelSize(0.05);
   pol41119->GetXaxis()->SetTitleSize(0.06);
   pol41119->GetXaxis()->SetTitleOffset(0.9);
   pol41119->GetXaxis()->SetTitleFont(42);
   pol41119->GetYaxis()->SetLabelFont(42);
   pol41119->GetYaxis()->SetLabelOffset(0.007);
   pol41119->GetYaxis()->SetLabelSize(0.05);
   pol41119->GetYaxis()->SetTitleSize(0.06);
   pol41119->GetYaxis()->SetTitleOffset(1.25);
   pol41119->GetYaxis()->SetTitleFont(42);
   pol41119->SetParameter(0,85.85041);
   pol41119->SetParError(0,2.952638);
   pol41119->SetParLimits(0,0,0);
   pol41119->SetParameter(1,-0.00913321);
   pol41119->SetParError(1,0.004236869);
   pol41119->SetParLimits(1,0,0);
   pol41119->SetParameter(2,5.340847e-06);
   pol41119->SetParError(2,2.109766e-06);
   pol41119->SetParLimits(2,0,0);
   pol41119->SetParameter(3,-1.191798e-09);
   pol41119->SetParError(3,4.368836e-10);
   pol41119->SetParLimits(3,0,0);
   pol41119->SetParameter(4,8.948308e-14);
   pol41119->SetParError(4,3.20629e-14);
   pol41119->SetParLimits(4,0,0);
   pol41119->Draw("Csame");
   
   TF1 *pol41120 = new TF1("pol4","pol4",0,13000);
   pol41120->SetBit(TF1::kNotDraw);
   pol41120->SetFillColor(19);
   pol41120->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol41120->SetMarkerColor(ci);
   pol41120->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   pol41120->SetLineColor(ci);
   pol41120->SetLineWidth(3);
   pol41120->SetLineStyle(9);
   pol41120->SetChisquare(7.076321);
   pol41120->SetNDF(7);
   pol41120->GetXaxis()->SetLabelFont(42);
   pol41120->GetXaxis()->SetLabelOffset(0.007);
   pol41120->GetXaxis()->SetLabelSize(0.05);
   pol41120->GetXaxis()->SetTitleSize(0.06);
   pol41120->GetXaxis()->SetTitleOffset(0.9);
   pol41120->GetXaxis()->SetTitleFont(42);
   pol41120->GetYaxis()->SetLabelFont(42);
   pol41120->GetYaxis()->SetLabelOffset(0.007);
   pol41120->GetYaxis()->SetLabelSize(0.05);
   pol41120->GetYaxis()->SetTitleSize(0.06);
   pol41120->GetYaxis()->SetTitleOffset(1.25);
   pol41120->GetYaxis()->SetTitleFont(42);
   pol41120->SetParameter(0,90.80568);
   pol41120->SetParError(0,1.61012);
   pol41120->SetParLimits(0,0,0);
   pol41120->SetParameter(1,-0.01579002);
   pol41120->SetParError(1,0.002431292);
   pol41120->SetParLimits(1,0,0);
   pol41120->SetParameter(2,7.665528e-06);
   pol41120->SetParError(2,1.271639e-06);
   pol41120->SetParLimits(2,0,0);
   pol41120->SetParameter(3,-1.511429e-09);
   pol41120->SetParError(3,2.751124e-10);
   pol41120->SetParLimits(3,0,0);
   pol41120->SetParameter(4,1.039568e-13);
   pol41120->SetParError(4,2.095396e-14);
   pol41120->SetParLimits(4,0,0);
   pol41120->Draw("Csame");
   
   Double_t _fx1119[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1119[12] = {
   83.49253,
   83.4058,
   83.23608,
   82.9096,
   82.85845,
   83.41644,
   83.63423,
   83.58573,
   83.447,
   83.0604,
   83.62762,
   82.90898};
   Double_t _fex1119[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1119[12] = {
   0.1516123,
   0.1418472,
   0.1378124,
   0.1418815,
   0.1379476,
   0.1301736,
   0.1377076,
   0.1382187,
   0.1477795,
   0.1439378,
   0.1955468,
   0.2003739};
   gre = new TGraphErrors(12,_fx1119,_fy1119,_fex1119,_fey1119);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1119 = new TH1F("Graph_Graph1119","",100,770,5930);
   Graph_Graph1119->SetMinimum(82.59715);
   Graph_Graph1119->SetMaximum(83.93462);
   Graph_Graph1119->SetDirectory(0);
   Graph_Graph1119->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1119->SetLineColor(ci);
   Graph_Graph1119->GetXaxis()->SetLabelFont(42);
   Graph_Graph1119->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1119->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1119->GetXaxis()->SetTitleFont(42);
   Graph_Graph1119->GetYaxis()->SetLabelFont(42);
   Graph_Graph1119->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1119->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1119->GetYaxis()->SetTitleFont(42);
   Graph_Graph1119->GetZaxis()->SetLabelFont(42);
   Graph_Graph1119->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1119->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1119);
   
   
   TF1 *pol41120 = new TF1("pol4","pol4",1200,5500);
   pol41120->SetFillColor(19);
   pol41120->SetFillStyle(0);
   pol41120->SetLineColor(2);
   pol41120->SetLineWidth(2);
   pol41120->SetChisquare(19.46554);
   pol41120->SetNDF(7);
   pol41120->GetXaxis()->SetLabelFont(42);
   pol41120->GetXaxis()->SetLabelOffset(0.007);
   pol41120->GetXaxis()->SetLabelSize(0.05);
   pol41120->GetXaxis()->SetTitleSize(0.06);
   pol41120->GetXaxis()->SetTitleOffset(0.9);
   pol41120->GetXaxis()->SetTitleFont(42);
   pol41120->GetYaxis()->SetLabelFont(42);
   pol41120->GetYaxis()->SetLabelOffset(0.007);
   pol41120->GetYaxis()->SetLabelSize(0.05);
   pol41120->GetYaxis()->SetTitleSize(0.06);
   pol41120->GetYaxis()->SetTitleOffset(1.25);
   pol41120->GetYaxis()->SetTitleFont(42);
   pol41120->SetParameter(0,89.72685);
   pol41120->SetParError(0,1.715463);
   pol41120->SetParLimits(0,0,0);
   pol41120->SetParameter(1,-0.009741897);
   pol41120->SetParError(1,0.002575487);
   pol41120->SetParLimits(1,0,0);
   pol41120->SetParameter(2,4.940246e-06);
   pol41120->SetParError(2,1.336914e-06);
   pol41120->SetParLimits(2,0,0);
   pol41120->SetParameter(3,-1.008941e-09);
   pol41120->SetParError(3,2.870234e-10);
   pol41120->SetParLimits(3,0,0);
   pol41120->SetParameter(4,7.144531e-14);
   pol41120->SetParError(4,2.171972e-14);
   pol41120->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41120);
   gre->Draw("p");
   
   Double_t _fx1121[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1121[12] = {
   82.83857,
   83.81952,
   83.20697,
   83.62036,
   83.62158,
   84.25951,
   84.4889,
   84.6842,
   84.4464,
   84.10673,
   83.69356,
   83.6473};
   Double_t _fex1121[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1121[12] = {
   0.371464,
   0.2881096,
   0.2665039,
   0.2576657,
   0.2418031,
   0.2252071,
   0.2200934,
   0.2090583,
   0.1973996,
   0.2083536,
   0.2500118,
   0.2518498};
   gre = new TGraphErrors(12,_fx1121,_fy1121,_fex1121,_fey1121);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1121 = new TH1F("Graph_Graph1121","",100,770,5930);
   Graph_Graph1121->SetMinimum(82.22449);
   Graph_Graph1121->SetMaximum(85.13587);
   Graph_Graph1121->SetDirectory(0);
   Graph_Graph1121->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1121->SetLineColor(ci);
   Graph_Graph1121->GetXaxis()->SetLabelFont(42);
   Graph_Graph1121->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1121->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1121->GetXaxis()->SetTitleFont(42);
   Graph_Graph1121->GetYaxis()->SetLabelFont(42);
   Graph_Graph1121->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1121->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1121->GetYaxis()->SetTitleFont(42);
   Graph_Graph1121->GetZaxis()->SetLabelFont(42);
   Graph_Graph1121->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1121->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1121);
   
   
   TF1 *pol41122 = new TF1("pol4","pol4",1200,5500);
   pol41122->SetFillColor(19);
   pol41122->SetFillStyle(0);
   pol41122->SetLineColor(2);
   pol41122->SetLineWidth(2);
   pol41122->SetChisquare(5.633401);
   pol41122->SetNDF(7);
   pol41122->GetXaxis()->SetLabelFont(42);
   pol41122->GetXaxis()->SetLabelOffset(0.007);
   pol41122->GetXaxis()->SetLabelSize(0.05);
   pol41122->GetXaxis()->SetTitleSize(0.06);
   pol41122->GetXaxis()->SetTitleOffset(0.9);
   pol41122->GetXaxis()->SetTitleFont(42);
   pol41122->GetYaxis()->SetLabelFont(42);
   pol41122->GetYaxis()->SetLabelOffset(0.007);
   pol41122->GetYaxis()->SetLabelSize(0.05);
   pol41122->GetYaxis()->SetTitleSize(0.06);
   pol41122->GetYaxis()->SetTitleOffset(1.25);
   pol41122->GetYaxis()->SetTitleFont(42);
   pol41122->SetParameter(0,86.04016);
   pol41122->SetParError(0,3.215858);
   pol41122->SetParLimits(0,0,0);
   pol41122->SetParameter(1,-0.00560803);
   pol41122->SetParError(1,0.004632559);
   pol41122->SetParLimits(1,0,0);
   pol41122->SetParameter(2,3.662542e-06);
   pol41122->SetParError(2,2.318935e-06);
   pol41122->SetParLimits(2,0,0);
   pol41122->SetParameter(3,-8.429515e-10);
   pol41122->SetParError(3,4.829742e-10);
   pol41122->SetParLimits(3,0,0);
   pol41122->SetParameter(4,6.326119e-14);
   pol41122->SetParError(4,3.563724e-14);
   pol41122->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41122);
   gre->Draw("p");
   
   TF1 *pol41123 = new TF1("pol4","pol4",0,13000);
   pol41123->SetBit(TF1::kNotDraw);
   pol41123->SetFillColor(19);
   pol41123->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol41123->SetMarkerColor(ci);
   pol41123->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   pol41123->SetLineColor(ci);
   pol41123->SetLineWidth(3);
   pol41123->SetChisquare(5.633401);
   pol41123->SetNDF(7);
   pol41123->GetXaxis()->SetLabelFont(42);
   pol41123->GetXaxis()->SetLabelOffset(0.007);
   pol41123->GetXaxis()->SetLabelSize(0.05);
   pol41123->GetXaxis()->SetTitleSize(0.06);
   pol41123->GetXaxis()->SetTitleOffset(0.9);
   pol41123->GetXaxis()->SetTitleFont(42);
   pol41123->GetYaxis()->SetLabelFont(42);
   pol41123->GetYaxis()->SetLabelOffset(0.007);
   pol41123->GetYaxis()->SetLabelSize(0.05);
   pol41123->GetYaxis()->SetTitleSize(0.06);
   pol41123->GetYaxis()->SetTitleOffset(1.25);
   pol41123->GetYaxis()->SetTitleFont(42);
   pol41123->SetParameter(0,86.04016);
   pol41123->SetParError(0,3.215858);
   pol41123->SetParLimits(0,0,0);
   pol41123->SetParameter(1,-0.00560803);
   pol41123->SetParError(1,0.004632559);
   pol41123->SetParLimits(1,0,0);
   pol41123->SetParameter(2,3.662542e-06);
   pol41123->SetParError(2,2.318935e-06);
   pol41123->SetParLimits(2,0,0);
   pol41123->SetParameter(3,-8.429515e-10);
   pol41123->SetParError(3,4.829742e-10);
   pol41123->SetParLimits(3,0,0);
   pol41123->SetParameter(4,6.326119e-14);
   pol41123->SetParError(4,3.563724e-14);
   pol41123->SetParLimits(4,0,0);
   pol41123->Draw("Csame");
   
   TF1 *pol41124 = new TF1("pol4","pol4",0,13000);
   pol41124->SetBit(TF1::kNotDraw);
   pol41124->SetFillColor(19);
   pol41124->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol41124->SetMarkerColor(ci);
   pol41124->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   pol41124->SetLineColor(ci);
   pol41124->SetLineWidth(3);
   pol41124->SetLineStyle(9);
   pol41124->SetChisquare(19.46554);
   pol41124->SetNDF(7);
   pol41124->GetXaxis()->SetLabelFont(42);
   pol41124->GetXaxis()->SetLabelOffset(0.007);
   pol41124->GetXaxis()->SetLabelSize(0.05);
   pol41124->GetXaxis()->SetTitleSize(0.06);
   pol41124->GetXaxis()->SetTitleOffset(0.9);
   pol41124->GetXaxis()->SetTitleFont(42);
   pol41124->GetYaxis()->SetLabelFont(42);
   pol41124->GetYaxis()->SetLabelOffset(0.007);
   pol41124->GetYaxis()->SetLabelSize(0.05);
   pol41124->GetYaxis()->SetTitleSize(0.06);
   pol41124->GetYaxis()->SetTitleOffset(1.25);
   pol41124->GetYaxis()->SetTitleFont(42);
   pol41124->SetParameter(0,89.72685);
   pol41124->SetParError(0,1.715463);
   pol41124->SetParLimits(0,0,0);
   pol41124->SetParameter(1,-0.009741897);
   pol41124->SetParError(1,0.002575487);
   pol41124->SetParLimits(1,0,0);
   pol41124->SetParameter(2,4.940246e-06);
   pol41124->SetParError(2,1.336914e-06);
   pol41124->SetParLimits(2,0,0);
   pol41124->SetParameter(3,-1.008941e-09);
   pol41124->SetParError(3,2.870234e-10);
   pol41124->SetParLimits(3,0,0);
   pol41124->SetParameter(4,7.144531e-14);
   pol41124->SetParError(4,2.171972e-14);
   pol41124->SetParLimits(4,0,0);
   pol41124->Draw("Csame");
   
   Double_t _fx1123[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1123[12] = {
   90.54216,
   90.31151,
   90.14473,
   89.84599,
   89.8867,
   89.88769,
   90.4647,
   90.50816,
   90.3935,
   90.0595,
   90.23501,
   89.77814};
   Double_t _fex1123[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1123[12] = {
   0.1559549,
   0.1212431,
   0.1120691,
   0.111534,
   0.1067589,
   0.1112303,
   0.1116892,
   0.1161717,
   0.1189845,
   0.1385076,
   0.147423,
   0.1437004};
   gre = new TGraphErrors(12,_fx1123,_fy1123,_fex1123,_fey1123);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1123 = new TH1F("Graph_Graph1123","",100,770,5930);
   Graph_Graph1123->SetMinimum(89.52807);
   Graph_Graph1123->SetMaximum(90.80448);
   Graph_Graph1123->SetDirectory(0);
   Graph_Graph1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1123->SetLineColor(ci);
   Graph_Graph1123->GetXaxis()->SetLabelFont(42);
   Graph_Graph1123->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1123->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1123->GetXaxis()->SetTitleFont(42);
   Graph_Graph1123->GetYaxis()->SetLabelFont(42);
   Graph_Graph1123->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1123->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1123->GetYaxis()->SetTitleFont(42);
   Graph_Graph1123->GetZaxis()->SetLabelFont(42);
   Graph_Graph1123->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1123->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1123);
   
   
   TF1 *pol41124 = new TF1("pol4","pol4",1200,5500);
   pol41124->SetFillColor(19);
   pol41124->SetFillStyle(0);
   pol41124->SetLineColor(2);
   pol41124->SetLineWidth(2);
   pol41124->SetChisquare(11.41733);
   pol41124->SetNDF(7);
   pol41124->GetXaxis()->SetLabelFont(42);
   pol41124->GetXaxis()->SetLabelOffset(0.007);
   pol41124->GetXaxis()->SetLabelSize(0.05);
   pol41124->GetXaxis()->SetTitleSize(0.06);
   pol41124->GetXaxis()->SetTitleOffset(0.9);
   pol41124->GetXaxis()->SetTitleFont(42);
   pol41124->GetYaxis()->SetLabelFont(42);
   pol41124->GetYaxis()->SetLabelOffset(0.007);
   pol41124->GetYaxis()->SetLabelSize(0.05);
   pol41124->GetYaxis()->SetTitleSize(0.06);
   pol41124->GetYaxis()->SetTitleOffset(1.25);
   pol41124->GetYaxis()->SetTitleFont(42);
   pol41124->SetParameter(0,97.72585);
   pol41124->SetParError(0,1.512447);
   pol41124->SetParLimits(0,0,0);
   pol41124->SetParameter(1,-0.01076316);
   pol41124->SetParError(1,0.002230096);
   pol41124->SetParLimits(1,0,0);
   pol41124->SetParameter(2,5.140959e-06);
   pol41124->SetParError(2,1.143795e-06);
   pol41124->SetParLimits(2,0,0);
   pol41124->SetParameter(3,-9.927226e-10);
   pol41124->SetParError(3,2.435381e-10);
   pol41124->SetParLimits(3,0,0);
   pol41124->SetParameter(4,6.662685e-14);
   pol41124->SetParError(4,1.830937e-14);
   pol41124->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41124);
   gre->Draw("p");
   
   Double_t _fx1125[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1125[12] = {
   91.17248,
   90.89186,
   91.06435,
   90.58933,
   90.85723,
   91.51831,
   91.81234,
   91.77787,
   91.76527,
   91.6935,
   90.90204,
   90.73234};
   Double_t _fex1125[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1125[12] = {
   0.294129,
   0.2688785,
   0.236758,
   0.2506408,
   0.22186,
   0.1820293,
   0.2062301,
   0.1865963,
   0.1900059,
   0.2000277,
   0.1703362,
   0.1775614};
   gre = new TGraphErrors(12,_fx1125,_fy1125,_fex1125,_fey1125);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1125 = new TH1F("Graph_Graph1125","",100,770,5930);
   Graph_Graph1125->SetMinimum(90.1707);
   Graph_Graph1125->SetMaximum(92.18656);
   Graph_Graph1125->SetDirectory(0);
   Graph_Graph1125->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1125->SetLineColor(ci);
   Graph_Graph1125->GetXaxis()->SetLabelFont(42);
   Graph_Graph1125->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1125->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1125->GetXaxis()->SetTitleFont(42);
   Graph_Graph1125->GetYaxis()->SetLabelFont(42);
   Graph_Graph1125->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1125->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1125->GetYaxis()->SetTitleFont(42);
   Graph_Graph1125->GetZaxis()->SetLabelFont(42);
   Graph_Graph1125->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1125->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1125);
   
   
   TF1 *pol41126 = new TF1("pol4","pol4",1200,5500);
   pol41126->SetFillColor(19);
   pol41126->SetFillStyle(0);
   pol41126->SetLineColor(2);
   pol41126->SetLineWidth(2);
   pol41126->SetChisquare(5.634184);
   pol41126->SetNDF(7);
   pol41126->GetXaxis()->SetLabelFont(42);
   pol41126->GetXaxis()->SetLabelOffset(0.007);
   pol41126->GetXaxis()->SetLabelSize(0.05);
   pol41126->GetXaxis()->SetTitleSize(0.06);
   pol41126->GetXaxis()->SetTitleOffset(0.9);
   pol41126->GetXaxis()->SetTitleFont(42);
   pol41126->GetYaxis()->SetLabelFont(42);
   pol41126->GetYaxis()->SetLabelOffset(0.007);
   pol41126->GetYaxis()->SetLabelSize(0.05);
   pol41126->GetYaxis()->SetTitleSize(0.06);
   pol41126->GetYaxis()->SetTitleOffset(1.25);
   pol41126->GetYaxis()->SetTitleFont(42);
   pol41126->SetParameter(0,97.44063);
   pol41126->SetParError(0,2.679131);
   pol41126->SetParLimits(0,0,0);
   pol41126->SetParameter(1,-0.01035983);
   pol41126->SetParError(1,0.003868647);
   pol41126->SetParLimits(1,0,0);
   pol41126->SetParameter(2,5.513027e-06);
   pol41126->SetParError(2,1.933749e-06);
   pol41126->SetParLimits(2,0,0);
   pol41126->SetParameter(3,-1.133722e-09);
   pol41126->SetParError(3,4.011304e-10);
   pol41126->SetParLimits(3,0,0);
   pol41126->SetParameter(4,7.879763e-14);
   pol41126->SetParError(4,2.944898e-14);
   pol41126->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(pol41126);
   gre->Draw("p");
   
   TF1 *pol41127 = new TF1("pol4","pol4",0,13000);
   pol41127->SetBit(TF1::kNotDraw);
   pol41127->SetFillColor(19);
   pol41127->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol41127->SetMarkerColor(ci);
   pol41127->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol41127->SetLineColor(ci);
   pol41127->SetLineWidth(3);
   pol41127->SetChisquare(5.634184);
   pol41127->SetNDF(7);
   pol41127->GetXaxis()->SetLabelFont(42);
   pol41127->GetXaxis()->SetLabelOffset(0.007);
   pol41127->GetXaxis()->SetLabelSize(0.05);
   pol41127->GetXaxis()->SetTitleSize(0.06);
   pol41127->GetXaxis()->SetTitleOffset(0.9);
   pol41127->GetXaxis()->SetTitleFont(42);
   pol41127->GetYaxis()->SetLabelFont(42);
   pol41127->GetYaxis()->SetLabelOffset(0.007);
   pol41127->GetYaxis()->SetLabelSize(0.05);
   pol41127->GetYaxis()->SetTitleSize(0.06);
   pol41127->GetYaxis()->SetTitleOffset(1.25);
   pol41127->GetYaxis()->SetTitleFont(42);
   pol41127->SetParameter(0,97.44063);
   pol41127->SetParError(0,2.679131);
   pol41127->SetParLimits(0,0,0);
   pol41127->SetParameter(1,-0.01035983);
   pol41127->SetParError(1,0.003868647);
   pol41127->SetParLimits(1,0,0);
   pol41127->SetParameter(2,5.513027e-06);
   pol41127->SetParError(2,1.933749e-06);
   pol41127->SetParLimits(2,0,0);
   pol41127->SetParameter(3,-1.133722e-09);
   pol41127->SetParError(3,4.011304e-10);
   pol41127->SetParLimits(3,0,0);
   pol41127->SetParameter(4,7.879763e-14);
   pol41127->SetParError(4,2.944898e-14);
   pol41127->SetParLimits(4,0,0);
   pol41127->Draw("Csame");
   
   TF1 *pol41128 = new TF1("pol4","pol4",0,13000);
   pol41128->SetBit(TF1::kNotDraw);
   pol41128->SetFillColor(19);
   pol41128->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol41128->SetMarkerColor(ci);
   pol41128->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   pol41128->SetLineColor(ci);
   pol41128->SetLineWidth(3);
   pol41128->SetLineStyle(9);
   pol41128->SetChisquare(11.41733);
   pol41128->SetNDF(7);
   pol41128->GetXaxis()->SetLabelFont(42);
   pol41128->GetXaxis()->SetLabelOffset(0.007);
   pol41128->GetXaxis()->SetLabelSize(0.05);
   pol41128->GetXaxis()->SetTitleSize(0.06);
   pol41128->GetXaxis()->SetTitleOffset(0.9);
   pol41128->GetXaxis()->SetTitleFont(42);
   pol41128->GetYaxis()->SetLabelFont(42);
   pol41128->GetYaxis()->SetLabelOffset(0.007);
   pol41128->GetYaxis()->SetLabelSize(0.05);
   pol41128->GetYaxis()->SetTitleSize(0.06);
   pol41128->GetYaxis()->SetTitleOffset(1.25);
   pol41128->GetYaxis()->SetTitleFont(42);
   pol41128->SetParameter(0,97.72585);
   pol41128->SetParError(0,1.512447);
   pol41128->SetParLimits(0,0,0);
   pol41128->SetParameter(1,-0.01076316);
   pol41128->SetParError(1,0.002230096);
   pol41128->SetParLimits(1,0,0);
   pol41128->SetParameter(2,5.140959e-06);
   pol41128->SetParError(2,1.143795e-06);
   pol41128->SetParLimits(2,0,0);
   pol41128->SetParameter(3,-9.927226e-10);
   pol41128->SetParError(3,2.435381e-10);
   pol41128->SetParLimits(3,0,0);
   pol41128->SetParameter(4,6.662685e-14);
   pol41128->SetParError(4,1.830937e-14);
   pol41128->SetParLimits(4,0,0);
   pol41128->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("pol4","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol4","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol4","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol4","G_{B}#rightarrow ZZ","L");

   ci = TColor::GetColor("#ffd300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   leg = new TLegend(0.7788945,0.1783217,0.9974874,0.2482517,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","HPHP","LP");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("","HPLP","LP");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.936,"(13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.89284,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.83524,"Simulation Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.03648);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
