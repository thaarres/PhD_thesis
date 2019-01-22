void Signal_mVV_N1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 14:34:13 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(390,-1.85567,5806.667,11.03093);
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
   
   TF1 *pol01034 = new TF1("pol0","pol0",0,13000);
   pol01034->SetBit(TF1::kNotDraw);
   pol01034->SetFillColor(19);
   pol01034->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   pol01034->SetMarkerColor(ci);
   pol01034->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol01034->SetLineColor(ci);
   pol01034->SetLineWidth(3);
   pol01034->SetChisquare(9.466331e-30);
   pol01034->SetNDF(11);
   pol01034->GetXaxis()->SetTitle("M_{X} (GeV)");
   pol01034->GetXaxis()->SetRange(9,43);
   pol01034->GetXaxis()->SetNdivisions(209);
   pol01034->GetXaxis()->SetLabelFont(42);
   pol01034->GetXaxis()->SetLabelOffset(0.007);
   pol01034->GetXaxis()->SetLabelSize(0.05);
   pol01034->GetXaxis()->SetTitleSize(0.06);
   pol01034->GetXaxis()->SetTitleOffset(0.94);
   pol01034->GetXaxis()->SetTitleFont(42);
   pol01034->GetYaxis()->SetTitle("N1 (GeV)");
   pol01034->GetYaxis()->SetNdivisions(504);
   pol01034->GetYaxis()->SetLabelFont(42);
   pol01034->GetYaxis()->SetLabelOffset(0.007);
   pol01034->GetYaxis()->SetLabelSize(0.05);
   pol01034->GetYaxis()->SetTitleSize(0.06);
   pol01034->GetYaxis()->SetTitleOffset(0.97);
   pol01034->GetYaxis()->SetTitleFont(42);
   pol01034->SetParameter(0,5);
   pol01034->SetParError(0,2.677959e-16);
   pol01034->SetParLimits(0,0,0);
   pol01034->Draw("C");
   
   Double_t _fx1033[12] = {
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
   Double_t _fy1033[12] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fex1033[12] = {
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
   Double_t _fey1033[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,_fx1033,_fy1033,_fex1033,_fey1033);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1033 = new TH1F("Graph_Graph1033","",100,770,5930);
   Graph_Graph1033->SetMinimum(4.9);
   Graph_Graph1033->SetMaximum(6.1);
   Graph_Graph1033->SetDirectory(0);
   Graph_Graph1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1033->SetLineColor(ci);
   Graph_Graph1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph1033->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1033->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph1033->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1033->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1033);
   
   
   TF1 *pol01034 = new TF1("pol0","pol0",1200,5500);
   pol01034->SetFillColor(19);
   pol01034->SetFillStyle(0);
   pol01034->SetLineColor(2);
   pol01034->SetLineWidth(2);
   pol01034->SetChisquare(9.466331e-30);
   pol01034->SetNDF(11);
   pol01034->GetXaxis()->SetLabelFont(42);
   pol01034->GetXaxis()->SetLabelOffset(0.007);
   pol01034->GetXaxis()->SetLabelSize(0.05);
   pol01034->GetXaxis()->SetTitleSize(0.06);
   pol01034->GetXaxis()->SetTitleOffset(0.9);
   pol01034->GetXaxis()->SetTitleFont(42);
   pol01034->GetYaxis()->SetLabelFont(42);
   pol01034->GetYaxis()->SetLabelOffset(0.007);
   pol01034->GetYaxis()->SetLabelSize(0.05);
   pol01034->GetYaxis()->SetTitleSize(0.06);
   pol01034->GetYaxis()->SetTitleOffset(1.25);
   pol01034->GetYaxis()->SetTitleFont(42);
   pol01034->SetParameter(0,5);
   pol01034->SetParError(0,2.677959e-16);
   pol01034->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01034);
   gre->Draw("p");
   
   TF1 *pol01035 = new TF1("pol0","pol0",0,13000);
   pol01035->SetBit(TF1::kNotDraw);
   pol01035->SetFillColor(19);
   pol01035->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol01035->SetMarkerColor(ci);
   pol01035->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol01035->SetLineColor(ci);
   pol01035->SetLineWidth(3);
   pol01035->SetChisquare(9.466331e-30);
   pol01035->SetNDF(11);
   pol01035->GetXaxis()->SetTitle("M_{X} (GeV)");
   pol01035->GetXaxis()->SetRange(9,43);
   pol01035->GetXaxis()->SetNdivisions(209);
   pol01035->GetXaxis()->SetLabelFont(42);
   pol01035->GetXaxis()->SetLabelOffset(0.007);
   pol01035->GetXaxis()->SetLabelSize(0.05);
   pol01035->GetXaxis()->SetTitleSize(0.06);
   pol01035->GetXaxis()->SetTitleOffset(0.94);
   pol01035->GetXaxis()->SetTitleFont(42);
   pol01035->GetYaxis()->SetTitle("N1 (GeV)");
   pol01035->GetYaxis()->SetNdivisions(504);
   pol01035->GetYaxis()->SetLabelFont(42);
   pol01035->GetYaxis()->SetLabelOffset(0.007);
   pol01035->GetYaxis()->SetLabelSize(0.05);
   pol01035->GetYaxis()->SetTitleSize(0.06);
   pol01035->GetYaxis()->SetTitleOffset(0.97);
   pol01035->GetYaxis()->SetTitleFont(42);
   pol01035->SetParameter(0,5);
   pol01035->SetParError(0,2.677959e-16);
   pol01035->SetParLimits(0,0,0);
   pol01035->Draw("Csame");
   
   Double_t _fx1035[12] = {
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
   Double_t _fy1035[12] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fex1035[12] = {
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
   Double_t _fey1035[12] = {
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
   gre = new TGraphErrors(12,_fx1035,_fy1035,_fex1035,_fey1035);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1035 = new TH1F("Graph_Graph1035","",100,770,5930);
   Graph_Graph1035->SetMinimum(4.9);
   Graph_Graph1035->SetMaximum(6.1);
   Graph_Graph1035->SetDirectory(0);
   Graph_Graph1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1035->SetLineColor(ci);
   Graph_Graph1035->GetXaxis()->SetLabelFont(42);
   Graph_Graph1035->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1035->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1035->GetXaxis()->SetTitleFont(42);
   Graph_Graph1035->GetYaxis()->SetLabelFont(42);
   Graph_Graph1035->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1035->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1035->GetYaxis()->SetTitleFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1035);
   
   
   TF1 *pol01036 = new TF1("pol0","pol0",1200,5500);
   pol01036->SetFillColor(19);
   pol01036->SetFillStyle(0);
   pol01036->SetLineColor(2);
   pol01036->SetLineWidth(2);
   pol01036->SetChisquare(9.466331e-30);
   pol01036->SetNDF(11);
   pol01036->GetXaxis()->SetLabelFont(42);
   pol01036->GetXaxis()->SetLabelOffset(0.007);
   pol01036->GetXaxis()->SetLabelSize(0.05);
   pol01036->GetXaxis()->SetTitleSize(0.06);
   pol01036->GetXaxis()->SetTitleOffset(0.9);
   pol01036->GetXaxis()->SetTitleFont(42);
   pol01036->GetYaxis()->SetLabelFont(42);
   pol01036->GetYaxis()->SetLabelOffset(0.007);
   pol01036->GetYaxis()->SetLabelSize(0.05);
   pol01036->GetYaxis()->SetTitleSize(0.06);
   pol01036->GetYaxis()->SetTitleOffset(1.25);
   pol01036->GetYaxis()->SetTitleFont(42);
   pol01036->SetParameter(0,5);
   pol01036->SetParError(0,2.677959e-16);
   pol01036->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01036);
   gre->Draw("p");
   
   TF1 *pol01037 = new TF1("pol0","pol0",0,13000);
   pol01037->SetBit(TF1::kNotDraw);
   pol01037->SetFillColor(19);
   pol01037->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol01037->SetMarkerColor(ci);
   pol01037->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol01037->SetLineColor(ci);
   pol01037->SetLineWidth(3);
   pol01037->SetChisquare(9.466331e-30);
   pol01037->SetNDF(11);
   pol01037->GetXaxis()->SetLabelFont(42);
   pol01037->GetXaxis()->SetLabelOffset(0.007);
   pol01037->GetXaxis()->SetLabelSize(0.05);
   pol01037->GetXaxis()->SetTitleSize(0.06);
   pol01037->GetXaxis()->SetTitleOffset(0.9);
   pol01037->GetXaxis()->SetTitleFont(42);
   pol01037->GetYaxis()->SetLabelFont(42);
   pol01037->GetYaxis()->SetLabelOffset(0.007);
   pol01037->GetYaxis()->SetLabelSize(0.05);
   pol01037->GetYaxis()->SetTitleSize(0.06);
   pol01037->GetYaxis()->SetTitleOffset(1.25);
   pol01037->GetYaxis()->SetTitleFont(42);
   pol01037->SetParameter(0,5);
   pol01037->SetParError(0,2.677959e-16);
   pol01037->SetParLimits(0,0,0);
   pol01037->Draw("Csame");
   
   Double_t _fx1037[12] = {
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
   Double_t _fy1037[12] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fex1037[12] = {
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
   Double_t _fey1037[12] = {
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
   gre = new TGraphErrors(12,_fx1037,_fy1037,_fex1037,_fey1037);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","",100,770,5930);
   Graph_Graph1037->SetMinimum(4.9);
   Graph_Graph1037->SetMaximum(6.1);
   Graph_Graph1037->SetDirectory(0);
   Graph_Graph1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1037->SetLineColor(ci);
   Graph_Graph1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph1037->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1037->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph1037->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1037->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1037->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1037);
   
   
   TF1 *pol01038 = new TF1("pol0","pol0",1200,5500);
   pol01038->SetFillColor(19);
   pol01038->SetFillStyle(0);
   pol01038->SetLineColor(2);
   pol01038->SetLineWidth(2);
   pol01038->SetChisquare(9.466331e-30);
   pol01038->SetNDF(11);
   pol01038->GetXaxis()->SetLabelFont(42);
   pol01038->GetXaxis()->SetLabelOffset(0.007);
   pol01038->GetXaxis()->SetLabelSize(0.05);
   pol01038->GetXaxis()->SetTitleSize(0.06);
   pol01038->GetXaxis()->SetTitleOffset(0.9);
   pol01038->GetXaxis()->SetTitleFont(42);
   pol01038->GetYaxis()->SetLabelFont(42);
   pol01038->GetYaxis()->SetLabelOffset(0.007);
   pol01038->GetYaxis()->SetLabelSize(0.05);
   pol01038->GetYaxis()->SetTitleSize(0.06);
   pol01038->GetYaxis()->SetTitleOffset(1.25);
   pol01038->GetYaxis()->SetTitleFont(42);
   pol01038->SetParameter(0,5);
   pol01038->SetParError(0,2.677959e-16);
   pol01038->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01038);
   gre->Draw("p");
   
   TF1 *pol01039 = new TF1("pol0","pol0",0,13000);
   pol01039->SetBit(TF1::kNotDraw);
   pol01039->SetFillColor(19);
   pol01039->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol01039->SetMarkerColor(ci);
   pol01039->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   pol01039->SetLineColor(ci);
   pol01039->SetLineWidth(3);
   pol01039->SetChisquare(9.466331e-30);
   pol01039->SetNDF(11);
   pol01039->GetXaxis()->SetLabelFont(42);
   pol01039->GetXaxis()->SetLabelOffset(0.007);
   pol01039->GetXaxis()->SetLabelSize(0.05);
   pol01039->GetXaxis()->SetTitleSize(0.06);
   pol01039->GetXaxis()->SetTitleOffset(0.9);
   pol01039->GetXaxis()->SetTitleFont(42);
   pol01039->GetYaxis()->SetLabelFont(42);
   pol01039->GetYaxis()->SetLabelOffset(0.007);
   pol01039->GetYaxis()->SetLabelSize(0.05);
   pol01039->GetYaxis()->SetTitleSize(0.06);
   pol01039->GetYaxis()->SetTitleOffset(1.25);
   pol01039->GetYaxis()->SetTitleFont(42);
   pol01039->SetParameter(0,5);
   pol01039->SetParError(0,2.677959e-16);
   pol01039->SetParLimits(0,0,0);
   pol01039->Draw("Csame");
   
   Double_t _fx1039[12] = {
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
   Double_t _fy1039[12] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fex1039[12] = {
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
   Double_t _fey1039[12] = {
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
   gre = new TGraphErrors(12,_fx1039,_fy1039,_fex1039,_fey1039);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1039 = new TH1F("Graph_Graph1039","",100,770,5930);
   Graph_Graph1039->SetMinimum(4.9);
   Graph_Graph1039->SetMaximum(6.1);
   Graph_Graph1039->SetDirectory(0);
   Graph_Graph1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1039->SetLineColor(ci);
   Graph_Graph1039->GetXaxis()->SetLabelFont(42);
   Graph_Graph1039->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1039->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1039->GetXaxis()->SetTitleFont(42);
   Graph_Graph1039->GetYaxis()->SetLabelFont(42);
   Graph_Graph1039->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1039->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1039->GetYaxis()->SetTitleFont(42);
   Graph_Graph1039->GetZaxis()->SetLabelFont(42);
   Graph_Graph1039->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1039->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1039);
   
   
   TF1 *pol01040 = new TF1("pol0","pol0",1200,5500);
   pol01040->SetFillColor(19);
   pol01040->SetFillStyle(0);
   pol01040->SetLineColor(2);
   pol01040->SetLineWidth(2);
   pol01040->SetChisquare(9.466331e-30);
   pol01040->SetNDF(11);
   pol01040->GetXaxis()->SetLabelFont(42);
   pol01040->GetXaxis()->SetLabelOffset(0.007);
   pol01040->GetXaxis()->SetLabelSize(0.05);
   pol01040->GetXaxis()->SetTitleSize(0.06);
   pol01040->GetXaxis()->SetTitleOffset(0.9);
   pol01040->GetXaxis()->SetTitleFont(42);
   pol01040->GetYaxis()->SetLabelFont(42);
   pol01040->GetYaxis()->SetLabelOffset(0.007);
   pol01040->GetYaxis()->SetLabelSize(0.05);
   pol01040->GetYaxis()->SetTitleSize(0.06);
   pol01040->GetYaxis()->SetTitleOffset(1.25);
   pol01040->GetYaxis()->SetTitleFont(42);
   pol01040->SetParameter(0,5);
   pol01040->SetParError(0,2.677959e-16);
   pol01040->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01040);
   gre->Draw("p");
   
   TF1 *pol01041 = new TF1("pol0","pol0",0,13000);
   pol01041->SetBit(TF1::kNotDraw);
   pol01041->SetFillColor(19);
   pol01041->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol01041->SetMarkerColor(ci);
   pol01041->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol01041->SetLineColor(ci);
   pol01041->SetLineWidth(3);
   pol01041->SetChisquare(9.466331e-30);
   pol01041->SetNDF(11);
   pol01041->GetXaxis()->SetLabelFont(42);
   pol01041->GetXaxis()->SetLabelOffset(0.007);
   pol01041->GetXaxis()->SetLabelSize(0.05);
   pol01041->GetXaxis()->SetTitleSize(0.06);
   pol01041->GetXaxis()->SetTitleOffset(0.9);
   pol01041->GetXaxis()->SetTitleFont(42);
   pol01041->GetYaxis()->SetLabelFont(42);
   pol01041->GetYaxis()->SetLabelOffset(0.007);
   pol01041->GetYaxis()->SetLabelSize(0.05);
   pol01041->GetYaxis()->SetTitleSize(0.06);
   pol01041->GetYaxis()->SetTitleOffset(1.25);
   pol01041->GetYaxis()->SetTitleFont(42);
   pol01041->SetParameter(0,5);
   pol01041->SetParError(0,2.677959e-16);
   pol01041->SetParLimits(0,0,0);
   pol01041->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("pol0","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol0","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol0","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol0","G_{B}#rightarrow ZZ","L");

   ci = TColor::GetColor("#ffd300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
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
